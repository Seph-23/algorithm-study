package baekjoon.b17298;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());

    StringTokenizer st = new StringTokenizer(br.readLine());
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = Integer.parseInt(st.nextToken());
    }

    int[] ans = new int[n];
    Stack<Integer> stack = new Stack<>();       //인덱스 저장 스택
    stack.push(0);
    for (int i = 1; i < n; i++) {
      while (!stack.isEmpty() && a[stack.peek()] < a[i]) {
        ans[stack.pop()] = a[i];
      }
      stack.push(i);
    }

    while (!stack.isEmpty()) {
      ans[stack.pop()] = -1;
    }

    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    for (int i = 0; i < n; i++) {
      bw.write(ans[i] + " ");
    }
    bw.flush();
  }
}
