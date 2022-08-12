package examples.java.exams;

import java.util.Scanner;

public class Test3 {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    System.out.print("请输入成绩: ");
    int grade = s.nextInt();

    // grade / 10 会保留 int 类型, 非float类型(没有小数点)
    switch (grade / 10) {
      case 10:
      case 9:
        System.out.print("优秀");
        break;
      case 8:
        System.out.print("良好");
        break;
      case 7:
      case 6:
        System.out.print("及格");
        break;
      default:
        System.out.print("不及格");
    }

    // 关闭输入流
    s.close();
  }
}
