#include <bits/stdc++.h>
using namespace std;
hash<int>hs[300005];
void solve()
{
  int n, m;
  cin >> n >> m;
  string t,s, s1;
  cin >> t;
  s =t+t;
  int ans = 1e8;
  for (int i = 1; i <= m; ++i)
  {
    cin >> s1;
    if (s1.size() <= n && t.find(s1) != string::npos)
      ans = min(ans, (int)s1.size());
  }
  if(ans==1e8)cout<<0<<'\n';
  else cout<<ans<<'\n';
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