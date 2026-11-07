# include <bits/stdc++.h>
using namespace std;

int n, m, a[200005],dp[200005];
int main (){
freopen("and.in", "r", stdin);
freopen("and.ans", "w", stdout);
cin >> n >> m;
for(int i = 1; i <= 1; i++){
    cin >> a[i];
    dp[i] = INT_MIN;
}
dp[0] == 1;
if(n==m){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans += a[i];
    }
    cout << ans;
    return 0;
}
for(int i = 1; i <= n; i++){
    for(int j = n; j > 0; j--){
        dp[j] = min(dp[j], dp[j-1], a[i]);
    }
}
cout << dp[n];
return 0;
}
