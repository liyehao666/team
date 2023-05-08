#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int b,l;
  cin>>b>>l;
  vector<int>d(l),x;
  for(auto &i:d)cin>>i;
  x=d;
  for(int i=l-1;i>=1;--i)
  {
    if(x[i]==-1)
    {
      x[i]+=b;
      x[i-1]--;
    }
    if(x[i]<=x[i-1])
      x[i-1]-=x[i],x[i]=0;
    else
    {
      if(i-2>=0)
      {
        x[i-2]--;
        x[i-1]+=b-x[i];
        x[i]=0;
      }
      else
      {
        x[i]-=x[i-1];
        x[i-1]=0;
        break;
      }
    }
  }
  int t=0;
  while(t<l&&x[t]==0)t++;
  if(t==l)
  {
    cout<<0<<' '<<0<<endl;
    return ;
  }
  while(t<l-1)
  {
    if(d[t]>=x[t])
    {
      cout<<t+1<<' '<<d[t]-x[t]<<endl;
      return ;
    }
    x[t+1]=b-(x[t]-1);
    t++;
  }
  if(d[t]>=x[t])
   {
     cout<<t+1<<' '<<d[t]-x[t]<<endl;
     return ;
   } 
   cout<<-1<<' '<<-1<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}