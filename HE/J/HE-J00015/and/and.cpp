#include <bits/stdc++.h>
using namespace std;

int a[200010];
int dp[200010];
int main () {
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[1];
    for(int i = 1;i <= n;i++)
    {
        for(int j = i;j >= 1;j--)
        {
            dp[j]=max(dp[j-1]&a[i],dp[j]);
        }
        dp[1]=max(dp[1],a[i]);
    }
    cout<<dp[m];
    return 0;
}
