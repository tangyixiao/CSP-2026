#include <bits/stdc++.h>
using namespace std;
int n,m,ans,maxn,a[10000005];
bool tl(int a[100000005],int m)
{
    for(int i=1;i<=m;i++)
    {
        if(a[i]!=a[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    ans=a[n-m-1];
    for(int i=1;i<=n;i++)
    {
        if(tl)
        {
            maxn=max(maxn,a[i-1]);
        }
    }
    cout<<max(ans,maxn);
    return 0;
}
