package baekjoon.b12891;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
  static int checkArr[];
  static int currArr[];
  static int checkPassword;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int result = 0;
    checkArr = new int[4];
    currArr = new int[4];
    checkPassword = 0;

    int totalLength = Integer.parseInt(st.nextToken());
    int pwLength = Integer.parseInt(st.nextToken());

    char[] arr = new char[totalLength];
    arr = br.readLine().toCharArray();

    st = new StringTokenizer(br.readLine());
    for (int i = 0; i < 4; i++) {
      checkArr[i] = Integer.parseInt(st.nextToken());
      if (checkArr[i] == 0) {
        checkPassword++;
      }
    }

    for (int i = 0; i < pwLength; i++) {
      Add(arr[i]);
    }
    if (checkPassword == 4) {
      result++;
    }

    for (int i = pwLength; i < totalLength; i++) {
      int j = i - pwLength;
      Add(arr[i]);
      Remove(arr[j]);
      if (checkPassword == 4) {
        result++;
      }
    }
    System.out.println(result);
    br.close();
  }

  private static void Remove(char c) {
    switch (c) {
      case 'A':
        if (currArr[0] == checkArr[0]) {
          checkPassword--;
        }
        currArr[0]--;
        break;
      case 'C':
        if (currArr[1] == checkArr[1]) {
          checkPassword--;
        }
        currArr[1]--;
        break;
      case 'G':
        if (currArr[2] == checkArr[2]) {
          checkPassword--;
        }
        currArr[2]--;
        break;
      case 'T':
        if (currArr[3] == checkArr[3]) {
          checkPassword--;
        }
        currArr[3]--;
        break;
    }
  }

  private static void Add(char c) {
    switch (c) {
      case 'A':
        currArr[0]++;
        if (currArr[0] == checkArr[0]) {
          checkPassword++;
        }
        break;
      case 'C':
        currArr[1]++;
        if (currArr[1] == checkArr[1]) {
          checkPassword++;
        }
        break;
      case 'G':
        currArr[2]++;
        if (currArr[2] == checkArr[2]) {
          checkPassword++;
        }
        break;
      case 'T':
        currArr[3]++;
        if (currArr[3] == checkArr[3]) {
          checkPassword++;
        }
        break;
    }
  }
}
