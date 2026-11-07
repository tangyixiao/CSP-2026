#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+10;
int n,m,a[N],vis[N],maxn=INT_MIN;
void dfs(int x,int num)
{
    if(x>m)
    {
        maxn=max(maxn,num);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            dfs(x+1,(num&a[i]));
            vis[i]=0;
        }
    }
    return;
}
signed main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(m==n)
    {
        int sum=a[1];
        for(int i=2;i<=n;i++)
        {
            sum&=a[i];
        }
        cout<<sum<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        vis[i]=1;
        dfs(2,a[i]);
        vis[i]=0;
    }
    cout<<maxn<<endl;
    return 0;
}
