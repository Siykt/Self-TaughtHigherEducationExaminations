#include <iostream>
using namespace std;

class Date
{
private:
  int year, month, day;

public:
  void Set(int y, int m, int d)
  {
    year = y;
    month = m;
    day = d;
  }
  void print()
  {
    cout << year << "年"
         << month << "月"
         << day << "日"
         << endl;
  }
};

// 类外部使用operator重载>>操作符
istream &operator>>(istream &in, Date &dt)
{
  int y, m, d;
  cout << "输入年月日:";
  // 多个输入用多个 >> 指向
  // 次数使用 in
  in >> y >> m >> d;
  dt.Set(y, m, d);
  return in;
}

int main()
{
  Date d;
  cin >> d;
  d.print();
  system("pause");
  return 0;
}