#include <iostream>
using namespace std;

int main()
{
  int arr[8] = {8, 2, 1, 3, 4, 7, 6, 5};

  // 使用 sizeof 计算数组长度
  int len = sizeof(arr) / sizeof(arr[0]);

  // 用下标打印数组
  for (int i = 0; i < len; i++)
  {
    cout << "用下标打印数组: " << arr[i] << endl;
  }

  // 用指针打印数组
  // 指向数组的第一个值
  int *p = arr;
  for (int i = 0; i < len; i++)
  {
    cout << "用指针打印数组: " << *p << endl;
    // 指针的自增并不是单纯的 + 1, 而是位移一个它对应的字节数, 在这里就是 4 个字节
    p++;
  }

  system("pause");
  return 0;
}