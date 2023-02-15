package baekjoon.b11399;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

  static int n;
  static int[] p;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    n = Integer.parseInt(st.nextToken());
    p = new int[n];
    st = new StringTokenizer(br.readLine());
    for (int i = 0; i < n; i++) {
      p[i] = Integer.parseInt(st.nextToken());
    }
    Arrays.sort(p);
    int result = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        result += p[j];
      }
    }
    System.out.println(result);
  }
}
