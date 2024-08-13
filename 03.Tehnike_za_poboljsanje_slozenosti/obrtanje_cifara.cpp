#include <iostream>

using namespace std;

int len(int n)
{
  int br = 0;
  while (n > 0) {
    br++;
    n /= 10;
  }

  return br;
}

int main()
{
  int n;
  cin >> n;

  int np = len(n) - 1;
  int res = 0;

  while (n > 0) {
    res = 10*res + n % 10;
    n /= 10;
  }


  return 0;
}