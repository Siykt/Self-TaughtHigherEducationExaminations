#include <iostream>
using namespace std;

int main()
{
  // int, 占用 4 字节
  int i = 0;
  cout << "int 类型: " << i << ", 占用空间为:" << sizeof(i) << endl;

  // boolean, 占用 1 字节
  bool t = true;
  cout << "boolean 类型: " << t << ", 占用空间为:" << sizeof(t) << endl;

  // char, 占用 1 字节
  char c = 'a';
  cout << "char 类型: " << c << ", 占用空间为:" << sizeof(c) << endl;

  // float, 占用 4 字节
  float f = 0.1;
  cout << "float 类型: " << f << ", 占用空间为:" << sizeof(f) << endl;

  // C 风格字符串
  // C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 \0 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
  // 占用空间为字符串长度 + 1(\0 结尾)
  char s_c[] = "String";
  cout << "C 风格字符串: " << s_c << ", 占用空间为:" << sizeof(s_c) << endl;

  // string类
  // C++ 标准库提供了 string 类类型

  string str = "String";
  string str2 = "str";
  string str3 = "StrStrStrStrStrStrStrStrStrStrStrStrStrStrStr";

  //打印字符串长度
  cout << "str的长度: " << str.length() << endl;
  cout << "str2的长度: " << str2.length() << endl;
  cout << "str3的长度: " << str3.length() << endl;
  // 占用空间为 24
  cout << "str占用的空间: " << sizeof(str) << endl;
  cout << "str2占用的空间: " << sizeof(str2) << endl;
  cout << "str3占用的空间: " << sizeof(str3) << endl;

  /**
   * string类提供了一系列针对字符串的操作，比如：
   * 1. append() -- 在字符串的末尾添加字符
   * 2. find() -- 在字符串中查找字符串
   * 3. insert() -- 插入字符
   * 4. length() -- 返回字符串的长度
   * 5. replace() -- 替换字符串
   * 6. substr() -- 返回某个子字符串
   */

  // 在字符串的末尾添加字符
  str.append("_Siykt_");
  cout << "在字符串的末尾添加字符: " + str << endl;

  system("pause");
  return 0;
}