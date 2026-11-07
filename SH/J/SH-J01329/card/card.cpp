#include <bits/stdc++.h>
using namespace std;
long long n,m,a[50005],ans[50005],t=1;
bool d[50005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int t=1;t<=n;t++)
    {
        for(int i=t;i<=n;i++)
        {
            if(d[a[i]]==1)
            {
                for(int j=1;j<=m;j++) d[j]=0;
                d[a[i]]=1;
            }
            else d[a[i]]=1;
        }
        for(int j=1;j<=m;j++)
        {
            if(d[j]==1)
            {
                ans[j]++;
                d[j]=0;
            }
        }


    }

    for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
    return 0;
}
