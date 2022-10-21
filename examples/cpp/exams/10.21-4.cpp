#include <iostream>
using namespace std;
#include <string.h>

int Convert(char *str);
int main()
{
  char s[10] = "12345";
  int n = Convert(s);
  cout << n << endl;
  system("pause");
  return 0;
}

int Convert(char *str)
{
  int num = 0, digit;
  for (int i = 0; i < strlen(str); i++)
  {
    digit = (int)str[i] - 48;
    num = num * 10 + digit;
  }
  return num;
  system("pause");
  return 0;
}