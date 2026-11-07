#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000005],dp[1000005];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    dp[0]=a[1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[j]=max(dp[i-j]&a[i],dp[j]);
        }
    }
    cout<<dp[m];
    return 0;
}
