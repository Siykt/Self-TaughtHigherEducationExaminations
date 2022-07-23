// ! 当 Self-TaughtHigherEducationExaminations 作为根目录的时候需要作为 package 导出
package examples.java;

/**
 * 简单的应用程序 HelloWorld
 */

// 一个 Java 文件中只能有一个公有类, 且类名需要同文件名相同
public class HelloWorldApp {
  /**
   * public 关键字指 main() 方法为公有方法, 可以被任何地方调用, 实际上, main() 方法只被 Java 解释器调用
   * 
   * static 关键字指 main() 方法为静态的
   * 
   * void 类型对应Java的类型检查
   * 
   * String[] args 为命令行参数
   */
  public static void main(String[] args) {
    System.out.println("Hello World!");
  }
}
