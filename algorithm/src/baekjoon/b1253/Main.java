package baekjoon.b1253;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int num = Integer.parseInt(br.readLine());
    StringTokenizer st = new StringTokenizer(br.readLine());
    long[] arr = new long[num];
    for (int i = 0; i < num; i++) {
      arr[i] = Long.parseLong(st.nextToken());
    }
    Arrays.sort(arr);

    int result = 0;

    for (int k = 0; k < num; k++) {
      long find = arr[k];
      int i = 0;
      int j = num - 1;
      while (i < j) {
        if (arr[i] + arr[j] == find) {
          if (i != k && j != k) {
            result++;
            break;
          } else if (i == k) {
            i++;
          } else if (j == k) {
            j--;
          }
        } else if (arr[i] + arr[j] < find) {
          i++;
        } else {/////
          j--;
        }
      }
    }
    System.out.println(result);
  }
}
