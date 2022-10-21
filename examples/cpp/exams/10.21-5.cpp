#include <iostream>
using namespace std;

class A
{
private:
  int X, Y;

protected:
  int Z;

public:
  A(int a, int b, int c)
  {
    X = a;
    Y = b;
    Z = c;
  }
  int GetX() { return X; }
  int GetY() { return Y; }
  // 声明公有成员函数
  void Show();
};
class B : public A
{
private:
  int K;

public:
  B(int a, int b, int c, int d) : A(a, b, c) { K = d; }
  void Show() { cout << GetX() << GetY() << Z << K << endl; };
};
int main()
{

  B b(1, 2, 3, 4);
  // 输出
  b.Show();
  system("pause");
  return 0;
}