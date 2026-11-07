#include <bits/stdc++.h>
using namespace std;
long long n,m,a[20005],maxx,b,c[20005],ans;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>=maxx)
        {
            maxx=a[i];
            b=i;
        }
    }
    a[b]=0;
    c[1]=maxx;
    maxx=0;
    for(int j=2;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]>=maxx)
            {
                maxx=a[i];
                b=i;
            }
        }
        a[b]=0;
        c[j]=maxx;
        maxx=0;

    }
    ans=c[1];
    for(int i=2;i<=m;i++)
    {
        ans=ans&c[i];
    }
    cout<<ans;
    return 0;
}
