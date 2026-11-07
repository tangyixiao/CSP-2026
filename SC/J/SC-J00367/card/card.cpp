#include<bits/stdc++.h>
using namespace std;
int n,m,q,w,e,a[500005],b[500005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
        if(a[i]<a[i-1]) q=1;
    }
    if(q==0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i==n||a[i]!=a[i+1])
            {
                cout<<i<<" ";
            }
        }
        return 0;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}