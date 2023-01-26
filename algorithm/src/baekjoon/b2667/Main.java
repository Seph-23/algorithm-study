package baekjoon.b2667;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {

    static int n;
    static int[][] a;
    static boolean[][] visited;
    static int[] dx = {0, 1, 0, -1};
    static int[] dy = {1, 0, -1, 0};
    static int count = 0, number = 0;
    static int nowX, nowY;
    static List<Integer> result = new ArrayList<>();

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());

        a = new int[n][n];
        visited = new boolean[n][n];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            String line = st.nextToken();
            for (int j = 0; j < n; j++) {
                a[i][j] = Integer.parseInt(line.substring(j, j + 1));
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == false && a[i][j] == 1) {
                    count = 0;
                    number++;
                    dfs(i, j);
                    result.add(count);
                }
            }
        }

        Collections.sort(result);
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.append(number + "\n");
        for (int num : result) {
            bw.append(num + "\n");
        }
        bw.flush();
        bw.close();
    }

    static void dfs(int x, int y) {
        visited[x][y] = true;
        a[x][y] = number;
        count++;

        for (int i = 0; i < 4; i++) {
            nowX = dx[i] + x;
            nowY = dy[i] + y;
            if (nowX >= 0 && nowX < n && nowY >= 0 && nowY < n && visited[nowX][nowY] == false && a[nowX][nowY] == 1) {
                visited[nowX][nowY] = true;
                a[nowX][nowY] = number;
                dfs(nowX, nowY);
            }
        }
    }
}
