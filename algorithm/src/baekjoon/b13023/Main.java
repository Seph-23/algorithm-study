package baekjoon.b13023;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Main {

  static boolean[] visited;
  static ArrayList<Integer>[] arr;
  static boolean result;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int n = Integer.parseInt(st.nextToken());
    int m = Integer.parseInt(st.nextToken());

    arr = new ArrayList[n];
    visited = new boolean[n];
    result = false;

    for (int i = 0; i < n; i++) {
      arr[i] = new ArrayList<Integer>();
    }

    for (int i = 0; i < m; i++) {
      st = new StringTokenizer(br.readLine());
      int a = Integer.parseInt(st.nextToken());
      int b = Integer.parseInt(st.nextToken());
      arr[a].add(b);
      arr[b].add(a);
    }

    for (int i = 0; i < n; i++) {
      DFS(i, 1);
      if (result == true) {
        break;
      }
    }

    if (result == true) {
      System.out.println(1);
    } else {
      System.out.println(0);
    }
  }

  static void DFS(int num, int depth) {
    if (depth == 5 || result == true) {
      result = true;
      return;
    }
    visited[num] = true;
    for (int j : arr[num]) {
      if (visited[j] == false) {
        DFS(j, depth + 1);
      }
    }
    visited[num] = false;
  }
}
