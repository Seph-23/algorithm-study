package baekjoon.b9095;

import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {

  static int[] dp = new int[11];

  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int t = sc.nextInt();
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int j = 4; j <= 10; j++) {
      dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
    }

    for (int i = 0; i < t; i++) {
      int n = sc.nextInt();
      bw.append(String.valueOf(dp[n]))
        .append("\n");
    }

    bw.flush();
  }
}
