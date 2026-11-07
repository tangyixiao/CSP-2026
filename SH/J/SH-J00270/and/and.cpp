#include <bits/stdc++.h>
using namespace std;
int n,m,maxn=-1,MAX_INT=1048576,a[200005];
bool flag=1;
bool cmp(int x,int y)
{
    return x>y;
}
void dfs(int pos,int now,int d)
{
    if(pos==m+1)
    {
        maxn=max(d,maxn);
        return;
    }
    if(n-now<m-pos+1) return;
    for(int i = now+1;i <= n;++i)
    {
        if((d&a[i])>maxn) dfs(pos+1,i,(d&a[i]));
        if(pos==1) dfs(pos+1,i,a[i]);
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i = 1;i <= n;++i)
    {
        cin>>a[i];
        if(a[i]>=4) flag=0;
    }
    if(n<=2000)
    {
        dfs(1,0,0);
        cout<<maxn;
    }
    else if(flag)
    {
        int cnt[4]={};
        sort(a+1,a+1+n,cmp);
        for(int i = 1;i <= n;++i)
        {
            cnt[a[i]]++;
        }
        if(cnt[3]>=m) cout<<3;
        else if(cnt[3]+cnt[2]>=m) cout<<2;
        else if(cnt[3]+cnt[1]>=m) cout<<1;
        else cout<<0;
    }
    else
    {
        sort(a+1,a+1+n,cmp);
        int ans=a[1];
        for(int i = 2;i <= m;++i) ans=(ans&a[i]);
        cout<<ans;
    }
    return 0;
}
