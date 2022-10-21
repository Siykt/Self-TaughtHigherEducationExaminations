#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len)
{

  int cur;
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      cur = arr[j];
      if (cur > arr[j + 1])
      {
        arr[j] = arr[j + 1];
        arr[j + 1] = cur;
      }
    }
  }
  // 释放内存?
  cur = 0;

  // 打印数组
  for (int i = 0; i < len; i++)
  {
    cout << "排序后: " << arr[i] << endl;
  }
}

int main()
{
  // arr[8] 其实就是一个 int * 类型指针, 指向 arr[0] 的地址
  int arr[8] = {8, 2, 1, 3, 4, 7, 6, 5};
  int len = sizeof(arr) / sizeof(arr[0]);

  // 打印数组
  for (int i = 0; i < len; i++)
  {
    cout << "排序前: " << arr[i] << endl;
  }

  bubbleSort(arr, len);

  system("pause");
  return 0;
}