#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],dp[2005][2005],m,sum;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    cin>>a[1];
    sum=a[1];
    for(int i=2; i<=n; i++)
    {
        cin>>a[i];
        sum&=a[i];
        dp[i][1]=a[i];
    }
    if(m==n)
    {
        cout<<sum;
    }
    else if(n<=2000&&m<=2)
    {
        for(int i=2; i<=n; i++)
        {
            for(int j=2; j<=i&&j<=m; j++)
            {
                dp[i][j]=-1;
                for(int k=1; k<i; k++)
                {
                    dp[i][j]=max(dp[i][j],dp[k][j-1]&a[i]);
                }
            }
        }
        long long ans=-1;
        for(int i=m; i<=n; i++)
        {
            ans=max(ans,dp[i][m]);
        }
        cout<<ans;
    }
    return 0;
}