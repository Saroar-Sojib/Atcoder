#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
double sign;
double ans;
 
int main()
{
  ll n;
  cin >> n;
 
  for (ll i = 0; i <= 1000; i++)
  {
    for (ll j = 0; j < i; j++)
    {
      if (pow(i, 5) - pow(j, 5) == n)
      {
        cout << i << " " << j << endl;
        return 0;
      }
      if (pow(i, 5) + pow(j, 5) == n)
      {
        cout << i << " " << -j << endl;
        return 0;
      }
    }
  }
}
