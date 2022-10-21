#include <iostream>
#include <string.h>
using namespace std;

/**
 * 已知：char *s="123456";则cout<<s+2;的输出结果为 ?
 *
 * *s 指向的是 "123456" 中的首字符(char) '1' 的地址
 * 所以当 s + 1 时, *s 指向的是 "123456" 中的第二个字符 '2' 的地址
 * 直接打印 s 将会从第二个字符开始打印, 也就是 "23456"
 */
void t1()
{
  char *s = "123456";
  // +2 即为 "3456"
  cout << s + 2 << endl;

  system("pause");
}

/**
 * 已知：char*s="abcde";则sizeof(s)、sizeof(*s)、strlen(s)的值依次为
 *
 * *s 指向的是 "123456" 中的首字符(char) 'a' 的地址
 * sizeof 是一个编译时运算符，用于判断变量或数据类型的字节大小
 * 所以 sizeof(s) 获取的是指针的长度, 即为 4
 * 而 sizeof(*s) 获取的是首字符(char) 'a' 的长度, 即为 1
 * strlen(s) 获取的是字符串的长度, 也就是 5
 */
void t2()
{
  char *s = "abcde";
  // 4
  cout << sizeof(s) << endl;
  // 1
  cout << sizeof(*s) << endl;
  // 5
  cout << strlen(s) << endl;

  system("pause");
}

// 试错
void t3()
{

  // char * 是分配在字符串常量区的, 所以不可改变指向的值, 但是可以改变指针的地址
  // char[] 是分配在栈上的，可以改变指向的值，但不可以改变指针的地址
  // char *s;
  // ! invalid conversion from 'const char*' to 'char' 试图修改字符串常量
  // *s = "13213213";

  // char *s;
  // ! Segmentation fault 非法操作指针
  // cin >> *s;
  // char s;
  // cin >> s;

  // char *s1 = "abcd";
  // char *s2 = "1234";
  // ! Segmentation fault 非法操作指针
  // strcpy(s1, s2);

  // (const char [8])
  char *s = "abcdefg";
  // a
  cout << *s << endl;
  system("pause");
}

int main()
{

  t1();
  t2();
  t3();
  return 0;
}