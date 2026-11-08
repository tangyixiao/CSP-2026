#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n,m;
int a[N];
signed main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    if(m==n) 
    {
        int ans=a[1];
        for(int i=2;i<=n;i++) ans=ans&a[i];
        cout<<ans<<'\n';
    }
    cout<<a[m];
    return 0;
}