package baekjoon.b10986;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int no = sc.nextInt();
    int divisor = sc.nextInt();
    long[] preSum = new long[no];
    long[] C = new long[divisor];
    long answer = 0;

    //구간 합 배열 만들기
    preSum[0] = sc.nextInt();
    for (int i = 1; i < no; i++) {
      preSum[i] = preSum[i - 1] + sc.nextInt();
    }

    for (int i = 0; i < no; i++) {    //합 배열의 모든 값에 % 연산 수행하기
      int remainder = (int) (preSum[i] % divisor);
      if (remainder == 0) {           //0 ~ i 까지의 구간 합 자체가 0일 때 정답에 더하기
        answer++;
      }
      C[remainder]++;                 //나머지가 같은 인덱스의 개수 카운팅하기
    }

    for (long l : C) {
      System.out.println("l = " + l);
    }

    for (int i = 0; i < divisor; i++) {
      if (C[i] > 1) {
        answer = answer + (C[i] * (C[i] - 1) / 2);    //나머지가 같은 인덱스 중 2개를 뽑는 경우의 수를 더하기
      }
    }
    System.out.println(answer);
  }
}
