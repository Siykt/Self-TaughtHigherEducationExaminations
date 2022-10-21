#include <iostream>
using namespace std;

// 创建一个类使用 class 关键字
class Student
{
  // 公共属性
public:
  //  姓名
  string name;
  //  年纪
  int age;

  void say()
  {
    cout << "我的名字是: " << this->name << endl;
    cout << "年龄: " << this->age << endl;
  }
  // 声明类需要使用分号结尾
};

int main()
{

  //实例化 （通过一个类 创建一个对象的过程）
  Student s1;
  // 主动赋值
  s1.name = "Siykt";
  s1.age = 18;
  // 调用方法
  s1.say();

  system("pause");
  return 0;
}