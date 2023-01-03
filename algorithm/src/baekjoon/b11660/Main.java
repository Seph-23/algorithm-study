package baekjoon.b11660;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int arrSize = Integer.parseInt(st.nextToken());           //배열 사이즈
    int questionNo = Integer.parseInt(st.nextToken());        //질의 갯수
    int noArr[][] = new int[arrSize + 1][arrSize + 1];        //숫자 배열 생성

    //숫자 배열 값 입력
    for (int i = 1; i < arrSize + 1; i++) {
      st = new StringTokenizer(br.readLine());
      for (int j = 1; j < arrSize + 1; j++) {
        noArr[i][j] = Integer.parseInt(st.nextToken());
      }
    }

    int prefixSum[][] = new int[arrSize + 1][arrSize + 1];    //구간 합 배열 생성
    for (int i = 1; i < arrSize + 1; i++) {
      for (int j = 1; j < arrSize + 1; j++) {
        prefixSum[i][j] =
          prefixSum[i][j - 1] + prefixSum[i - 1][j] - prefixSum[i - 1][j - 1] + noArr[i][j];    //구간 합 배열 값 계산
      }
    }

    for (int i = 0; i < questionNo; i++) {
      st = new StringTokenizer(br.readLine());
      int x1 = Integer.parseInt(st.nextToken());
      int y1 = Integer.parseInt(st.nextToken());
      int x2 = Integer.parseInt(st.nextToken());
      int y2 = Integer.parseInt(st.nextToken());

      int result = prefixSum[x2][y2] - prefixSum[x1 - 1][y2] - prefixSum[x2][y1 - 1]
        + prefixSum[x1 - 1][y1 - 1];

      System.out.println(result);
    }

  }
}
