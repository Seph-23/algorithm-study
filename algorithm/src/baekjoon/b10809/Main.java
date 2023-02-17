package baekjoon.b10809;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    String input = String.valueOf(st.nextToken());
    char[] alphabet = new char[26];
    int[] result = new int[26];

    for (int i = 0; i < 26; i++) {
      alphabet[i] = (char) ('a' + i);
      result[i] = -1;
    }

    char[] s = new char[input.length()];
    for (int i = 0; i < input.length(); i++) {
      s[i] = input.charAt(i);
      for (int j = 0; j < alphabet.length; j++) {
        if (s[i] == alphabet[j] && result[j] == -1) {
          result[j] = i;
        }
      }
    }

    for (int i : result) {
      System.out.print(i + " ");
    }

  }
}
