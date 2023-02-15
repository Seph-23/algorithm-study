package baekjoon.b7576;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;


public class Main {

  static int n, m;
  static int[][] arr;
  static int[] dx = {0, -1, 0, 1};
  static int[] dy = {1, 0, -1, 0};
  static Queue<int[]> q = new LinkedList<>();

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());

    m = Integer.parseInt(st.nextToken());
    n = Integer.parseInt(st.nextToken());
    arr = new int[n][m];

    for (int i = 0; i < n; i++) {
      st = new StringTokenizer(br.readLine());
      for (int j = 0; j < m; j++) {
        arr[i][j] = Integer.parseInt(st.nextToken());
        if (arr[i][j] == 1) {
          q.add(new int[]{i, j});
        }
      }
    }

    System.out.println(bfs());
  }

  private static int bfs() {
    while (!q.isEmpty()) {
      int[] currNode = q.poll();
      int x = currNode[0];
      int y = currNode[1];
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
          continue;
        }
        if (arr[nx][ny] == 0) {
          arr[nx][ny] = arr[x][y] + 1;
          q.add(new int[]{nx, ny});
        }
      }
    }

    int max = -9999;
    if (checkZero()) {
      return -1;      //익지 않은 토마토가 있다면 -1 을 출력.
    } else {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (max < arr[i][j]) {
            max = arr[i][j];
          }
        }
      }
      return max - 1;   //모두 익었다면 최대값 출력.
    }
  }

  private static boolean checkZero() {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == 0) {
          return true;
        }
      }
    }
    return false;
  }
}