package examples.java.exams;

public class Test1 {
  public static void main(String[] args) {
    // 测试题之爱因斯坦阶台阶问题
    for (int i = 0; i <= 1000; i++) {
      // 若每步走 7 级, 则刚好不剩,
      // 若每步走 3 级则最后剩 2 级,
      // 若每步走 2 级则最后一剩 1 级
      if (i % 7 == 0 && i % 3 == 2 && i % 2 == 1) {
        System.out.println("此时 i 的值为: " + i);
      }
    }
  }
}
