package examples.java.exams;

public class AnalyticalProblem {
  static void expressTest() {
    /**
     * 主要计算的就是 `(a + b * 3) % c >> 1;` 的结果.
     * 我们先带入变量即可得: `(1 + 3 * 3) % 6 >> 1`.
     * 其中 `()` 的优先级最高, 即先计算 `1 + 3 * 3` 的结果.
     * 
     * 和数学一样, Java 里同样是 `*` 号的优先级比 `+` 号高, 即可得 $1+9=10$,
     * 重新带入可得 `10 % 6 >> 1`.
     * 
     * 位操作符: 右移符号 ">>" 的优先级并没有取余符号 % 高,
     * 所以再进一步推导可得 `4 >> 1`. 4 用二进制表示为 `00000100`,
     * 右移 1 位即为: `00000010` 等于十进制的 2
     */
    int a = 1, b = 3, c = 6, d;
    d = (a + b * 3) % c >> 1;
    System.out.println("run expressTest: " + d);
  }

  static void t1_33() {
    boolean a, b, c;
    a = false;
    b = true;
    c = false;
    // 短路 ||
    a = a || c && c;
    // 短路 &&
    b = a && (b || c);
    // 短路 &&
    c = b && a && c;
    // a = false, b = false, c = false
    System.out.println("a = " + a + ", b = " + b + ", c = " + c);
  }

  static void max() {
    int x = 2, y = 9, z = 1;
    // 优先级判断, x >= y 之后不会再运行 x >= z 及其分支
    // 即输出最大值是: 9
    if (x >= y)
      // 不会运行
      if (x >= z)
        System.out.println("最大值是: " + x);
      else
        System.out.println("最大值是: " + z);
    else if (y >= x)
      System.out.println("最大值是: " + y);
    else
      System.out.println("最大值是: " + z);
  }

  public static void main(String[] args) {
    // run expressTest: 2
    expressTest();
    // a = false, b = false, c = false
    t1_33();
  }
}
