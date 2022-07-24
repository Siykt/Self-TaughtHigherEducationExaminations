# java.lang

提供对 Java 编程语言设计至关重要的类.

See: [Package java.lang](https://www.matools.com/file/manual/jdk_api_1.8_google/java/lang/package-summary.html)

> 涵盖面不会太广, 主要尝试使用/实现一些可能会用到的接口与类

实现参考: [LearnJavaLangPackage.java](../../examples/java/LearnJavaLangPackage.java)

## 接口

### Runnable

Runnable 接口应由任何类实现的, 其实例将由线程执行. 该类必须定义一个无参数的方法的, 称为 run.
该接口旨在为希望在活动时执行代码的对象提供一个通用协议. 例如的, Runnable 由 Thread 类 Thread. 活跃的只是意味着一个线程已经启动的, 还没有被停止.

另外的, Runnable 提供了一个类被激活而不是 Thread Thread 类化的 Thread. 一个实现类 Runnable 可以在不继承运行 Thread 实例化一个 Thread 实例的, 并在传递本身作为目标. 在大多数情况下的, Runnable 接口应使用的, 如果你只打算重写 run()方法并没有其他 Thread 方法. 这是重要的的, 因为类不应该被子类化的, 除非程序员打算修改或增强类的基本行为.

实现 Runnable 接口的类必须使用 Thread 类的实例才能创建线程. 通过 Runnable 接口创建线程分为两步：

1. 将实现 Runnable 接口的类实例化.
2. 建立一个 Thread 对象，并将第一步实例化后的对象作为参数传入 Thread 类的构造方法. 最后通过 Thread 类的 start 方法建立线程.

下面的代码演示了如何使用 Runnable 接口来创建线程：

```java
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

  public static void main(String[] args) {
    LearnJavaLangPackage self = new LearnJavaLangPackage();
    self.runPrintlnRunnable();
  }
}
```

## 类

> 它实在是太多了, 慢慢补充吧

### Boolean

布尔类将对象中的基元类型 boolean 的值包 boolean

See: [Class Boolean](https://www.matools.com/file/manual/jdk_api_1.8_google/java/lang/Boolean.html)

实例:

```java
public class LearnJavaLangPackage {
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


  public static void main(String[] args) {
    LearnJavaLangPackage self = new LearnJavaLangPackage();
    self.runBooleanMethods();
  }
}
```

### Math

Math 类包含执行基本数字运算的方法, 如基本指数, 对数, 平方根和三角函数

See: [Class Math](https://www.matools.com/file/manual/jdk_api_1.8_google/java/lang/Math.html)

实例:

```java
public class LearnJavaLangPackage {
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

  public static void main(String[] args) {
    LearnJavaLangPackage self = new LearnJavaLangPackage();
    self.runMathMethods();
  }
}
```

### String

String 类代表字符串. Java 程序中的所有字符串文字（例如"abc" ）都被实现为此类的实例.

See: [Class String](https://www.matools.com/file/manual/jdk_api_1.8_google/java/lang/String.html)

实例:

```java
public class LearnJavaLangPackage {
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
    self.runStringMethods();
  }
}
```
