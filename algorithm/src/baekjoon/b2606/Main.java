package baekjoon.b2606;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Main {
  static int n, m, v;
  static ArrayList<Integer>[] a;
  static boolean visited[];
  static int count = 0;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    n = Integer.parseInt(st.nextToken());   //노드의 수
    st = new StringTokenizer(br.readLine());
    m = Integer.parseInt(st.nextToken());   //엣지의 수
    v = 1;    //탐색을 시작할 노드 번호

    a = new ArrayList[n + 1];
    visited = new boolean[n + 1];

    for (int i = 1; i <= n; i++) {
      a[i] = new ArrayList<>();
    }

    for (int i = 0; i < m; i++) {
      st = new StringTokenizer(br.readLine());
      int x = Integer.parseInt(st.nextToken());
      int y = Integer.parseInt(st.nextToken());
      a[x].add(y);
      a[y].add(x);
    }

    System.out.println(dfs(v));

    br.close();
  }

  static int dfs(int i) {
    visited[i] = true;
    for (int j : a[i]) {
      if (visited[j] == false) {
        count++;
        dfs(j);
      }
    }
    return count;
  }
}