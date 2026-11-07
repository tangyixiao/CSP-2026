#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=2e5+10;
bool vis[N][35];
int a[N];
bool flag[N];
void calc(int i,int x)
{
    for(int j=31;j>=0;j--)
    {
        int t=(1ll<<j);
        if(x>=t)
        {
            x-=t;
            vis[i][j]=1;
        }
    }
}
signed main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i],calc(i,a[i]);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=31;j>=0;j--) cout<<vis[i][j]<<' ';
    //     cout<<'\n';
    // }
    for(int i=31;i>=0;i--)
    {
        int cnt=0;
        for(int j=1;j<=n;j++)
        {
            if(flag[j]) continue;
            if(vis[j][i]) cnt++;
        }
        if(cnt>=m)
        {
            // cout<<"i:"<<i<<'\n';
            for(int j=1;j<=n;j++)
            {
                if(flag[j]) continue;
                if(!vis[j][i]) flag[j]=1;
            }
        }
    }
    int cnt=0,ans=(1ll<<31)-1;
    for(int i=1;i<=n;i++)
    {
        if(cnt>=m) break;
        // cout<<cnt<<' '<<flag[i]<<' '<<a[i]<<' '<<ans<<'\n';
        if(!flag[i]) cnt++,ans&=a[i];
        if(cnt>=m) break;
    }
    cout<<ans<<'\n';
    return 0;
}