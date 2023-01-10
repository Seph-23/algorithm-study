package baekjoon.b11724;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Main {
  static ArrayList<Integer>[] arr;
  static boolean[] visited;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int n = Integer.parseInt(st.nextToken());
    int m = Integer.parseInt(st.nextToken());

    arr = new ArrayList[n + 1];
    visited = new boolean[n + 1];

    for (int i = 1; i < n + 1; i++) {
      arr[i] = new ArrayList<Integer>();
    }
    for (int i = 0; i < m; i++) {
      st = new StringTokenizer(br.readLine());
      int a = Integer.parseInt(st.nextToken());
      int b = Integer.parseInt(st.nextToken());
      arr[a].add(b);
      arr[b].add(a);
    }

    int count = 0;    //연결 요소 개수
    for (int i = 1; i < n + 1; i++) {
      if (visited[i] == false) {
        count++;
        DFS(i);
      }
    }
    System.out.println(count);
  }

  private static void DFS(int i) {
    if (visited[i] == true) {
      return;
    }
    visited[i] = true;
    for (int j : arr[i]) {
      if (visited[j] == false) {
        DFS(j);
      }
    }
  }
}
