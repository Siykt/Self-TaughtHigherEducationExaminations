#include <iostream>
using namespace std;

int main()
{

  double x = 1234.56789;

  // 处理精度
  cout.precision(6);
  cout << '#' << x << endl;

  cout.precision(5);
  cout << x << endl;

  // 显示符号
  cout.setf(ios::showpos);
  cout << x << endl;

  // 科学计数法
  cout.setf(ios::scientific);
  cout << x << endl;

  system("pause");
  return 0;
}