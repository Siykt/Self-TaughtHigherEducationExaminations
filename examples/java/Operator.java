package examples.java;

public class Operator {
  public static void main(String[] args) {
    // 算术运算符
    System.out.println(1 + 2 * 3 / 4f/* 不加f会变成 int 类型 */); // 2.5

    int x = 1;
    System.out.println(x++ + 1); // 2
    System.out.println(++x + 1); // 4

    // 关系运算符
    System.out.println(1 > 2); // false
    System.out.println(1 < 2); // true
    System.out.println(1 >= 2); // false
    System.out.println(1 <= 2); // true
    System.out.println(1 == 2); // false
    System.out.println(1 != 2); // true

    // 逻辑运算符
    Boolean is = true, no = false;
    System.out.println(is && no); // false
    System.out.println(is || no); // true
    System.out.println(is ? "是的" : "不是"); // 是的
  }
}
