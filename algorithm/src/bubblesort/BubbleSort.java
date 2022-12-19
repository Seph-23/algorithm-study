package bubblesort;

import java.util.ArrayList;
import java.util.Collections;

public class BubbleSort {
  public static void main(String[] args) {

    ArrayList<Integer> dataList = new ArrayList<>();

    for (int i = 0; i < 100; i++) {
      dataList.add((int) (Math.random() * 100));
    }
    System.out.println("dataList = " + dataList);

    for (int i = 0; i < dataList.size() - 1; i++) {
      boolean swap = false;

      for (int j = 0; j < dataList.size() - 1 - i; j++) {
        if (dataList.get(j) > dataList.get(j + 1)) {
          Collections.swap(dataList, j, j + 1);
          swap = true;
        }
      }
      if (swap == false) {
        break;
      }
    }
    System.out.println(dataList);
  }
}
