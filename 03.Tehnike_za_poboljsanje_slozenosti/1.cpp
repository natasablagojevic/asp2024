#include <iostream>

using namespace std;

int main()
{
  int64_t k;
  cin >> k;

  int64_t Nk = k*k;
  int64_t Np = (k-1) * (k-1);

  int64_t Tk = (Nk * (Nk + 1)) / 2;
  int64_t Tp = (Np * (Np + 1)) / 2;

  cout << Nk << ' ' << Tk << endl;
  cout << Np << ' ' <<  Tp << endl;

  cout << Tk - Tp << endl; 

  cout << (1LL << (k-1)) << endl;


  return 0;
}