#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1),b(n+1);
    for(int i=1;i<=n;++i)cin>>a[i]>>b[i];
    bool flag=0;
    for(int i=1;i<=n;++i)
    {
        if(b[a[i]]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<'N'<<endl;
    else cout<<'Y'<<endl;
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