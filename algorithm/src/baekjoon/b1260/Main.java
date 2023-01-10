package baekjoon.b1260;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

  static boolean[] visited;
  static ArrayList<Integer>[] arr;
  static StringBuilder sb1 = new StringBuilder();
  static StringBuilder sb2 = new StringBuilder();

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int n = Integer.parseInt(st.nextToken());
    int m = Integer.parseInt(st.nextToken());
    int start = Integer.parseInt(st.nextToken());

    arr = new ArrayList[n + 1];
    visited = new boolean[n + 1];

    for (int i = 1; i < n + 1; i++) {
      arr[i] = new ArrayList<>();
    }
    for (int i = 0; i < m; i++) {
      st = new StringTokenizer(br.readLine());
      int a = Integer.parseInt(st.nextToken());
      int b = Integer.parseInt(st.nextToken());
      arr[a].add(b);
      arr[b].add(a);
    }

    for (int i = 1; i <= n; i++) {
      Collections.sort(arr[i]);
    }

    visited = new boolean[n + 1];
    DFS(start);
    visited = new boolean[n + 1];
    BFS(start);
    System.out.println(sb1);
    System.out.println(sb2);
  }

  static void DFS(int node) {
    if (visited[node] == true) {
      return;
    }
    sb1.append(node).append(" ");
    visited[node] = true;
    for (int j : arr[node]) {
      if (visited[j] == false) {
        DFS(j);
      }
    }
  }

  static void BFS(int node) {
    Queue<Integer> q = new LinkedList<>();
    q.add(node);
    visited[node] = true;

    while (!q.isEmpty()) {
      int currNode = q.poll();
      sb2.append(currNode).append(" ");
      for (int j : arr[currNode]) {
        if (!visited[j]) {
          visited[j] = true;
          q.add(j);
        }
      }
    }
  }
}
