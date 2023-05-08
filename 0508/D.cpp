#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<unsigned ll> a;
string s;
unsigned ll n;
bool dfs(int x = a.size() - 1)
{
  if (x == -1)
  {
    if (n == 1)
      return 1;
    else
      return 0;
  }
  if (n % a[x] == 0)
  {
    s.append(x + 1, 'A');
    s.push_back('B');
    n /= a[x];
    if (dfs(x))
      return 1;
    n *= a[x];
    s.erase(s.size() - x - 2);
  }
  if(dfs(x-1))return 1;
  return 0;
}
void solve()
{
  cin >> n;
  a.push_back(2);
  a.push_back(3);
  for (int i = 2; a[i - 1] + a[i - 2] <= n; ++i)
  {
    a.push_back(a[i - 1] + a[i - 2]);
  }
  if (dfs())
    cout << s << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}