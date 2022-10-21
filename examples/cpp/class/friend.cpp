#include <iostream>
using namespace std;

// 创建一个类使用 class 关键字
class Student
{
  // 全局函数友元
  friend void say(Student *s);

  // 公共属性
public:
  // 构造函数
  Student(string name)
  {
    this->name = name;
    age = 16;
  }
  //  姓名
  string name;

  // 私有属性
private:
  //  年纪
  int age;
};

// 类友元
class Classmate
{
  //告诉编译器 Student 类是 StudentBook 类的好朋友，可以访问到 StudentBook 类中私有内容
  friend class Student;

public:
  // 构造函数
  Classmate(string name)
  {
    this->name = name;
    age = 15;
  }

  string name;

  // 私有属性
private:
  //  年纪
  int age;
};

void say(Student *s)
{
  cout << "我的名字是: " << s->name << endl;
  cout << "年龄: " << s->age << endl;
}

int main()
{

  //实例化 （通过一个类 创建一个对象的过程）
  Student s1("Siykt");
  say(&s1);

  system("pause");
  return 0;
}