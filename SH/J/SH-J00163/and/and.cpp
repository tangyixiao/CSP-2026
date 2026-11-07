#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[200005];
int dp[5][200005];
int s[200005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]&a[i];
    }
    for(int i=2;i<=n;i++)
    {
        dp[i][i]=s[i];
        dp[i][1]=a[i];
    }
    for(int i=2;i<=m;i++)
    {
        for(int j=2;j<=n;j++)
        {
            if(dp[i][j]==0)dp[i%2][j]=dp[(i-1)%2][j-1]&a[j];
        }
    }
    cout<<dp[m%2][n];
    return 0;
}
