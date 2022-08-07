package examples.java.exams;

import java.util.Scanner;

public class Test2 {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int x = s.nextInt();
    boolean isBig;

    // 判断某个数字是否是 3 的倍数或者是 5 的倍数
    if (x % 3 == 0 || x % 5 == 0) {
      // ? 等于 10 怎么判断 ?
      // 如果是再使用条件运算判断该数是否大于 10
      isBig = x > 10;
      if (isBig) {
        System.out.println("大于 10");
      } else {
        System.out.println("小于 10");
      }
    }
  }
}
