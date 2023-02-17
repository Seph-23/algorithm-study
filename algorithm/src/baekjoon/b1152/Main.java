package baekjoon.b1152;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int result = 0;

    while (true) {
      try {
        st.nextToken();
        result++;
      } catch (Exception e) {
        break;
      }
    }

    System.out.println(result);
  }
}
