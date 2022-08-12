package examples.java.exams;

public class Test4 {
  static int maxDigit(int n) {
    int c = 0, d;
    // n 大于 0 时才有 取余 的结果
    while (n > 0) {
      // 取最后一位
      // 如 1314 / 10 = 131余4
      d = n % 10;
      // 取大
      if (d > c)
        c = d;
      n /= 10;
    }
    return c;
  }

  public static void main(String[] args) {
    System.out.println(maxDigit(13568));
    System.out.println(maxDigit(93561));
    System.out.println(maxDigit(13569));
  }
}
