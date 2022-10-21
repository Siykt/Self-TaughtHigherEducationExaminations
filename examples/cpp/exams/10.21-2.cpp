#include <iostream>
using namespace std;

void ti(int n)
{
  for (int i = 1; i < n; i++)
  {
    // 运算符优先级
    // n / 2 比 > 更早执行
    if (i > n / 2)
    {
      break;
    }

    cout << i << endl;
  }

  system("pause");
}

int main()
{

  ti(10);

  return 0;
}