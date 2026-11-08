#include <bits/stdc++.h>
using namespace std;
long long a[200005], dp[200005], n, m;
int ms;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin>>n>>m;
    
    for(long long i = 1;i<= n;i++){
        cin>>a[i];
    }
    
    sort(a + 1, a + 1 + n);
    if(m == 1){cout<<a[n];
    return 0;}
    dp [1] = a[n];
    a[n] = 0;
    for(long long k = 2;k<=m;k++){
        for(long long i = 1;i<=n;i++){
            if((dp[k-1] & a[i])>dp[k]){
                dp[k] = (dp[k-1] & a[i]);
                ms = i;
        }}
        a[ms] = 0;
    }
    cout<<dp[m];
    return 0;
}