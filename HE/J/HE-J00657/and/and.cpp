#include<bits/stdc++.h>
using namespace std;
int n,m,dp[100010],x[100010],z;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        dp[1]=max(dp[1],x[i]);
    }
    for (int j=2;j<=m;j++){
            dp[j]=dp[j-1]&x[1];

        for(int i=2;i<=n;i++){
            dp[j]=max(dp[j],dp[i-j]&x[i]);
    }
    }
   cout<<dp[m];
   return 0;
}
