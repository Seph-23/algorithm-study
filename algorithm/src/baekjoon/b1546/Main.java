package baekjoon.b1546;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int numClasses = sc.nextInt();
    int scores[] = new int[numClasses];
    for (int i = 0; i < numClasses; i++) {
      scores[i] = sc.nextInt();
    }

    int sum = 0;
    int max = 0;
    for (int i = 0; i < numClasses; i++) {
      sum += scores[i];
      if (scores[i] > max) {
        max = scores[i];
      }
    }
    System.out.println(sum * 100.0 / max / numClasses);
  }
}
