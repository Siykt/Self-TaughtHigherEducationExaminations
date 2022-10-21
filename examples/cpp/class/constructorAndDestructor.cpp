#include <iostream>
using namespace std;

class Person
{
public:
  //构造函数
  Person()
  {
    cout << "Person的构造函数调用" << endl;
  }
  //析构函数
  ~Person()
  {
    cout << "Person的析构函数调用" << endl;
  }
};

int main()
{

  Person p;

  system("pause");

  return 0;
}
