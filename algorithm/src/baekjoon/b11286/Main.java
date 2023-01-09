package baekjoon.b11286;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Main {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());

    PriorityQueue<Integer> q = new PriorityQueue<>((o1, o2) -> {
      int firstAbs = Math.abs(o1);
      int secondAbs = Math.abs(o2);
      if (Math.abs(o1) == Math.abs(o2)) {
        return o1 > o2 ? 1 : -1;          //두 절댓값이 같으면 음수 우선 정렬.
      } else {
        return firstAbs - secondAbs;      //양수면 o1이 크다, 0이면 두 수가 같다, 음수면 o2가 크다.
      }
    });

    StringBuilder sb = new StringBuilder();

    for (int i = 0; i < n; i++) {
      int input = Integer.parseInt(br.readLine());
      if (input == 0) {
        if (q.isEmpty()) {
          sb.append("0\n");
        } else {
          sb.append(q.poll()).append("\n");
        }
      } else {
        q.add(input);
      }
    }
    System.out.println(sb);
  }
}
