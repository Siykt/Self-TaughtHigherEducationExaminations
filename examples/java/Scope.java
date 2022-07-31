package examples.java;

public class Scope {
  // 在类中定义的变量整个类中都可以访问
  private String name;

  public void sayName() {
    // 直接访问类中定义的变量 name
    System.out.println("scope.name: " + name);
  }

  public void setName(String newName) {
    {
      // 局部变量在外部无法访问
      String coolSuffix = "cool~";
      newName += coolSuffix;
    }
    // ! 无法访问, 在编译时会提示错误: 找不到符号
    // ! 删除注释尝试
    // name += coolSuffix;
    name = newName;
  }

  public static void main(String[] args) {
    Scope scope = new Scope();
    String name = "局部变量Name";

    // ! 在编译时会提示错误: 已在方法 main(String[])中定义了变量 name
    // ! 删除注释尝试
    // String name = "?";
    scope.name = name;
    scope.sayName();

    scope.setName("AntPro");
    scope.sayName();
  }
}
