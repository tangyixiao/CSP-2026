#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,x=0;
    int a[100000]={0},b[100000]={0},c[100000]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        x=0;
        for(int j=i;j<n;j++)
        {
            c[x]=a[j];
            for(int k=0;k<=m;k++)
            {
                if(c[x]==c[k]&&x!=k)
                {
                   for(int u=x;u>=k;u--)
                   {
                       c[u]=0;
                   }
                    x=k;
                    c[x]=a[j];
                }
            }
            x++;
        }
        for(int i=0;i<m;i++)
        {
            b[c[i]]++;
            c[i]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
