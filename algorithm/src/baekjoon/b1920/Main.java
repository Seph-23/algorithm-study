package baekjoon.b1920;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

  static int n, m;
  static int[] a;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    StringBuilder sb = new StringBuilder();

    n = Integer.parseInt(st.nextToken());
    a = new int[n];
    st = new StringTokenizer(br.readLine());
    for (int i = 0; i < n; i++) {
      a[i] = Integer.parseInt(st.nextToken());
    }
    st = new StringTokenizer(br.readLine());
    m = Integer.parseInt(st.nextToken());
    st = new StringTokenizer(br.readLine());

    Arrays.sort(a);

    for (int i = 0; i < m; i++) {
      int target = Integer.parseInt(st.nextToken());
      boolean find = false;

      int start = 0;
      int end = a.length - 1;
      while (start <= end) {
        int midIndex = (start + end) / 2;
        int midVal = a[midIndex];

        if (midVal > target) {
          end = midIndex - 1;
        } else if (midVal < target) {
          start = midIndex + 1;
        } else {
          find = true;
          break;
        }
      }
      if (find) {
        sb.append("1\n");
      } else {
        sb.append("0\n");
      }
    }

    bw.write(sb.toString());
    bw.flush();
  }
}
