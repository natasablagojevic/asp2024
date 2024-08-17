#include <iostream>

using namespace std;

int main()
{
  int64_t a;
  int64_t b;
  int64_t k;

  cin >> a >> b >> k;

  if (a == 0)
    cout << ((b/k) + 1) << endl;
  else 
    cout << ((b/k) - ((a-1)/k)) << endl;

  return 0;
}