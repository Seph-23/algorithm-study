package insertionsort;

import java.util.ArrayList;
import java.util.Collections;

public class InsertionSort {

  public static void main(String[] args) {
    ArrayList<Integer> dataList = new ArrayList<>();
    for (int i = 0; i < 100; i++) {
      dataList.add((int) (Math.random() * 100));
    }

    System.out.println("sort(dataList) = " + sort(dataList));
  }

  static ArrayList<Integer> sort(ArrayList<Integer> dataList) {
    for (int i = 0; i < dataList.size() - 1; i++) {
      for (int j = i + 1; j > 0; j--) {
        if (dataList.get(j) < dataList.get(j - 1)) {
          Collections.swap(dataList, j, j - 1);
        } else {
          break;
        }
      }
    }
    return dataList;
  }

}
