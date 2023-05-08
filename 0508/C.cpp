#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
  int n, x, y;
  cin >> n;
  vector<int> wait;
  int ans = 0, d = -1;
  for (int i = 1; i <= n; ++i)
  {
    cin >> x >> y;
    if (x < ans)
    {
      if (d == y)
        ans = x + 10;
      else
        wait.push_back(x);
    }
    else
    {
      if (wait.size())
      {
        wait.clear();
        ans += 10;
        d ^= 1;
      }
      if (x > ans)
        ans = x + 10, d = y;
      else
      {
        if (d == y)
          ans = x + 10;
        else
          wait.push_back(x);
      }
    }
  }
  if (wait.size())
    ans += 10;
  cout << ans << endl;
}
int main()
{
  solve();
  return 0;
}