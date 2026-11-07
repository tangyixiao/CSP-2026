#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5 + 5;
int a[mxn] , n , m , f[mxn] , suf[mxn] , suff[mxn];
int main(){
    freopen("and.in" , "r" , stdin); freopen("and.out" , "w" , stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){ cin >> a[i]; }
    if(m == 1){
        int ans = 0;
        for(int i = 1 ; i <= n ; i++){ ans = max(a[i] , ans); }
        cout << ans << "\n";
    } else if(n <= 10000 && m == 2){
        int ans = 0;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(i != j){ int res = a[i] & a[j]; ans = max(ans , res); }
            }
        } cout << ans << "\n";
    } else if(m == n){
        int ans = (1 << 30) - 1;
        for(int i = 1 ; i <= n ; i++){
            ans &= a[i];
        } cout << ans << "\n";
    } else if(m == n - 1){
        int ans = 0; suf[0] = (1 << 30) - 1;
        for(int i = 1 ; i <= n ; i++){
            suf[i] = suf[i - 1] & a[i];
        } suff[n + 1] = (1 << 30) - 1;
        for(int i = n ; i >= 1 ; i--){
            suff[i] = suff[i + 1] & a[i];
        } for(int i = 1 ; i <= n ; i++){
            ans = max(ans , suf[i - 1] & suff[i + 1]);
        } cout << ans << "\n";
    } else if(n <= 20){
        int mx_mask = (1 << n) - 1; int ans = 0;
        for(int mask = 1 ; mask <= mx_mask ; mask++){
            int cnt = 0; for(int i = 1 ; i <= n ; i++){ if((mask >> (i - 1)) & 1){ cnt++; } }
            if(cnt != m){ continue; }
            int cur = (1 << 30) - 1;
            for(int i = 1 ; i <= n ; i++){
                if((mask >> (i - 1)) & 1){ cur &= a[i]; }
            } ans = max(ans , cur);
        } cout << ans << "\n";
    } else{ sort(a + 1 , a + 1 + n); cout << a[n - m + 1] << "\n"; }
    return 0;
}