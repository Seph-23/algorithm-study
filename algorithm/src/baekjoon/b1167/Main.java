package baekjoon.b1167;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

  static boolean[] visited;
  static int[] distance;
  static ArrayList<Node>[] arr;

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    arr = new ArrayList[n + 1];

    for (int i = 1; i < n + 1; i++) {
      arr[i] = new ArrayList<Node>();
    }
    for (int i = 0; i < n; i++) {
      StringTokenizer st = new StringTokenizer(br.readLine());
      int j = Integer.parseInt(st.nextToken());
      while (true) {
        int edge = Integer.parseInt(st.nextToken());
        if (edge == -1) {
          break;
        }
        int value = Integer.parseInt(st.nextToken());
        arr[j].add(new Node(edge, value));
      }
    }
    distance = new int[n + 1];
    visited = new boolean[n + 1];
    BFS(1);
    int max = 1;
    for (int i = 2; i <= n; i++) {
      if (distance[max] < distance[i]) {
        max = i;
      }
    }
    distance = new int[n + 1];
    visited = new boolean[n + 1];
    BFS(max);
    Arrays.sort(distance);
    System.out.println(distance[n]);
  }

  static void BFS(int index) {
    Queue<Integer> q = new LinkedList<Integer>();
    q.add(index);
    visited[index] = true;
    while (!q.isEmpty()) {
      int currNode = q.poll();
      for (Node i : arr[currNode]) {
        int edge = i.edge;
        int value = i.value;
        if (!visited[edge]) {
          visited[edge] = true;
          q.add(edge);
          distance[edge] = distance[currNode] + value;
        }
      }
    }
  }
}

class Node {
  int edge;
  int value;

  public Node(int edge, int value) {
    this.edge = edge;
    this.value = value;
  }
}
