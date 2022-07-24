package examples.java;

public class LearnJavaLangPackage {
  // 实现接口使用 `implements` 关键字
  class PrintlnRunnable implements Runnable {
    public void run() {
      // 简单的打印一下
      System.out.println(Thread.currentThread().getName());
    }
  }

  public void runPrintlnRunnable() {
    PrintlnRunnable r1 = new PrintlnRunnable();
    PrintlnRunnable r2 = new PrintlnRunnable();
    Thread t1 = new Thread(r1, "线程 1");
    Thread t2 = new Thread(r2);
    t2.setName("线程 2");
    t1.start();
    t2.start();
  }

  public void runBooleanMethods() {
    Boolean b = true;

    // 返回 true当且仅当参数不是 null, 并且是一个 Boolean对象, 表示与此对象相同的 boolean值
    System.out.println(b.equals(new Boolean("false")));
    // 返回此 Boolean对象的哈希码 1231
    System.out.println(b.hashCode());
    // 将字符串参数解析为布尔值 true
    System.out.println(Boolean.parseBoolean("true"));
    // 返回一个 String此布尔值的 String对象 true
    System.out.println(b.toString());
  }

  public void runMathMethods() {
    // e 与 pi
    System.out.println("E: " + Math.E + "\nPI: " + Math.PI);
    // 返回输入值的绝对值 1
    System.out.println(Math.abs(-1));
    // 返回两个值中的较大值 20
    System.out.println(Math.max(0, 20));
    // 返回两个值中的较小值 0
    System.out.println(Math.min(0, 20));
    // 返回值为 double值为正号, 大于等于 0.0, 小于 1.0
    System.out.println(Math.random());
  }

  public void runStringMethods() {
    String str = "abc";

    // 返回 char指定索引处的值 c
    System.out.println(str.charAt(2));
    // 返回指定索引处的字符（Unicode代码点） 99
    System.out.println(str.codePointAt(2));
    // 将此字符串与指定对象进行比较 false
    System.out.println(str.equals("abcd"));
    // 类似Python的format 你好呀, 小瘪三
    // see https://blog.csdn.net/lonely_fireworks/article/details/7962171
    System.out.println(String.format("你好呀, %s", "小瘪三"));
  }

  public static void main(String[] args) {
    LearnJavaLangPackage self = new LearnJavaLangPackage();
    self.runPrintlnRunnable();
    self.runBooleanMethods();
    self.runMathMethods();
    self.runStringMethods();
  }
}
