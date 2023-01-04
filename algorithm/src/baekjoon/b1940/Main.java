package baekjoon.b1940;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int numMaterial = Integer.parseInt(br.readLine());
    int target = Integer.parseInt(br.readLine());

    StringTokenizer st = new StringTokenizer(br.readLine());
    int[] materials = new int[numMaterial];
    for (int i = 0; i < numMaterial; i++) {
      materials[i] = Integer.parseInt(st.nextToken());
    }
    Arrays.sort(materials);

    int startIndex = 0;
    int endIndex = numMaterial - 1;
    int result = 0;

    while (startIndex < endIndex) {
      if (materials[startIndex] + materials[endIndex] == target) {
        result++;
        startIndex++;
        endIndex--;
      } else if (materials[startIndex] + materials[endIndex] > target) {
        endIndex--;
      } else if (materials[startIndex] + materials[endIndex] < target) {
        startIndex++;
      }
    }
    System.out.println(result);
  }
}
