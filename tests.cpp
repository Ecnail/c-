#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  fstream f;
  f.open("./Documents/c++/test.txt", ios::app);
  f << "test";
  f.close();
};
