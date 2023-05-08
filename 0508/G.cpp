#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int idx=1;
vector<int>ed[100005];
queue<int>Q;
queue<int>king;
bool vis[100005];
void dfs(int rt=1)
{
  king.push(rt);
  for(auto &i:ed[rt])
    dfs(i);
}
void solve()
{
  int q,x,y;
  cin>>q;
  while(q--)
  {
    cin>>x>>y;
    if(x==1)ed[y].push_back(++idx);
    else Q.push(y);
  }
  dfs();
  while(Q.size())
  {
    vis[Q.front()]=1;
    Q.pop();
    while(vis[king.front()])king.pop();
    cout<<king.front()<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
