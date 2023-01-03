package baekjoon.b11659;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) {
    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
    try {
      StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
      int suNo = Integer.parseInt(stringTokenizer.nextToken());
      int quizNo = Integer.parseInt(stringTokenizer.nextToken());
      long[] S = new long[suNo + 1];
      stringTokenizer = new StringTokenizer(bufferedReader.readLine());
      for (int i = 1; i <= suNo; i++) {
        S[i] = S[i - 1] + Integer.parseInt(stringTokenizer.nextToken());        //합 배열 공식
      }
      for (int q = 0; q < quizNo; q++) {
        stringTokenizer = new StringTokenizer(bufferedReader.readLine());
        int i = Integer.parseInt(stringTokenizer.nextToken());
        int j = Integer.parseInt(stringTokenizer.nextToken());
        System.out.println(S[j] - S[i - 1]);                                    //구간 합 공식
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
