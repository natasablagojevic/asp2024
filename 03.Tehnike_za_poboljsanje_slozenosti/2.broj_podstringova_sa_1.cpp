#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<int> pozicije;
  int n = s.length();

  for (int i = 0; i < n; i++) 
    if (s[i] == '1')
      pozicije.push_back(i);

  int brojac = 0;
  n = pozicije.size();

  /**
   * za svaku poziciju `i` karaktera 1, racunamo broj podstringova
   * koji pocinju na toj poziciji i zavrsavaju se na bilo kojoj
   * sledecoj poziciji 
   * 
   */
  for (int i = 0; i < n; i++ )
    brojac += (n - i - 1);

  cout << brojac << endl;


  return 0;
}