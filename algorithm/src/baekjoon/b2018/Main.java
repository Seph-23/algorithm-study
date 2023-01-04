package baekjoon.b2018;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int target = sc.nextInt();
    int count = 1;
    int startIndex = 1;
    int endIndex = 1;
    int sum = 1;

    while (endIndex != target) {
      if (sum == target) {
        count++;
        endIndex++;
        sum = sum + endIndex;
      } else if (sum > target) {
        sum = sum - startIndex;
        startIndex++;
      } else {
        endIndex++;
        sum = sum + endIndex;
      }
    }
    System.out.println(count);
  }
}
