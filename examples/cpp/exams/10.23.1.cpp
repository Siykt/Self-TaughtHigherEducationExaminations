#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  char address[20];
  ofstream outFile;
  // 打开文件
  outFile.open("address.txt", ios::out /** 打开模式 */);
  cout << "请输入地址：" << endl;
  while (cin >> address)
    outFile << address << endl;

  outFile.close();
  ifstream inFile("address.txt", ios::in);
  system("pause");
  return 0;
}
