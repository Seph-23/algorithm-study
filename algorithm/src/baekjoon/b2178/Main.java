package baekjoon.b2178;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

  static int[] dx = new int[]{1, -1, 0, 0};
  static int[] dy = new int[]{0, 0, 1, -1};
  static boolean[][] visited;
  static int[][] arr;
  static int n, m;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    n = Integer.parseInt(st.nextToken());
    m = Integer.parseInt(st.nextToken());

    arr = new int[n][m];
    visited = new boolean[n][m];

    for (int i = 0; i < n; i++) {
      st = new StringTokenizer(br.readLine());
      String s = st.nextToken();
      for (int j = 0; j < m; j++) {
        arr[i][j] = Integer.parseInt(s.substring(j, j + 1));
      }
    }

    BFS(0, 0);
    System.out.println(arr[n - 1][m - 1]);
  }

  public static void BFS(int i, int j) {
    Queue<int[]> q = new LinkedList<>();
    q.offer(new int[]{i, j});
    visited[i][j] = true;

    while (!q.isEmpty()) {
      int[] now = q.poll();
      for (int k = 0; k < 4; k++) {
        int x = now[0] + dx[k];
        int y = now[1] + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m) {   //좌표 유효성 검사
          if (visited[x][y] == false && arr[x][y] == 1) {
            visited[x][y] = true;
            arr[x][y] = arr[now[0]][now[1]] + 1;
            q.add(new int[]{x, y});
          }
        }
      }
    }
  }
}
