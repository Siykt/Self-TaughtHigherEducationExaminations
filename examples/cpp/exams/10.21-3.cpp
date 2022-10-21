#include <iostream>
using namespace std;

int main()
{
  int x = 3, y = 3;
  string s1 = "first\n", s2 = "second\n", s3 = "third\n";
  switch (x % 2)
  {
  case 1:
    switch (y)
    {
    case 0:
      cout << s1;
    case 1:
      cout << s2;
      break;
    default:
      cout << "hello:";
    }
  case 2:
  default:
    cout << s3;
  }

  system("pause");
  return 0;
}