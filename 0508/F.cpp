#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t,d,m;
    cin>>t>>d>>m;
    vector<int>a(m+1);
    for(int i=1;i<=m;++i)cin>>a[i];
    a[0]=0;
    a.push_back(d);
    bool flag=0;
    for(int i=1;i<=m+1;++i)
    {
        if(a[i]-a[i-1]>=t)
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<'Y'<<endl;
    else cout<<'N'<<endl;
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