package baekjoon.b2023;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
  static StringBuilder sb = new StringBuilder();

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int N = Integer.parseInt(br.readLine());
    DFS(0, N);
    System.out.println(sb);
  }

  static void DFS(int num, int digits) {
    if (digits == 0) {
      if (isPrime(num)) {
        sb.append(num).append("\n");
        return;
      }
    }
    for (int i = 0; i < 10; i++) {
      int next = num * 10 + i;
      if (isPrime(next)) {
        DFS(next, digits - 1);
      }
    }
  }

  static boolean isPrime(int num) {
    if (num < 2) {
      return false;
    }
    if (num == 2) {
      return true;
    }
    for (int i = 2; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        return false;
      }
    }
    return true;
  }
}
