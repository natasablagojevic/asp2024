#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int k;

  // int64_t res = (b/k) - (a-1)/k;

  if (a == 0)
    cout << ((b/k) + 1) << endl;
  else 
    cout << ((b/k) - ((a-1)/k)) << endl;

  return 0;
}