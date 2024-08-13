#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define INF INT_MIN

int main()
{
  int n;
  cin >> n;

  vector<int> result(n);
  vector<int> parni(n, INF);
  vector<int> neparni(n, INF);
  int k;
  int ip = 0;
  int in = 0;

  for (int i = 0; i < n; i++) {
    cin >> k;

    if (k % 2 == 0) {
      parni[ip++] = k;
    } else {
      neparni[in++] = k;
    }
  }
  
  int i = 0;
  for ( ; i < ip; i++)
    result[i] = parni[i];

  in = 0;
  for (i = ip; i < n; i++) {
    result[i] = neparni[in++];
  }

  for (int x : result) 
    cout << x << ' ';
  cout << endl;



  return 0;
}
