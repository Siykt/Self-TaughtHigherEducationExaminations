package examples.java;

public class TypeConversion {

  public static void main(String[] args) {
    int i = 3;
    long big = 99L;

    // 自动类型转换
    long bigVal = i;

    // 强制类型转换
    byte b = (byte) i;
    int squashed = (int) bigVal;

    System.out.println("i: " + i);
    System.out.println("big: " + big);
    System.out.println("bigVal: " + bigVal);
    System.out.println("b: " + b);
    System.out.println("squashed: " + squashed);
  }
}
