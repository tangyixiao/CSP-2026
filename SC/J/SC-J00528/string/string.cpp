#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5 + 5;
using ll = long long;
ll a[mxn]; char s[mxn];
int main(){
    freopen("string.in" , "r" , stdin); freopen("string.out" , "w" , stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 1 ; i <= n ; i++){ cin >> a[i] >> s[i]; }
    int l = 1 , r = n;
    ll ans = 0 , lsum = 0 , rsum = 0; 
    while(l <= r){  
        lsum += a[l];
        while(lsum > rsum){
            rsum += a[r];
            if(s[l] != s[r]){
                if(rsum > lsum){
                    ll res = rsum - lsum;
                    ans += a[r] - res;
                    a[r] = res;
                    r++; rsum = lsum;
                } else{ ans += a[r]; }
            } else{
                if(rsum > lsum){
                    ll res = rsum - lsum;
                    a[r] = res;
                    r++; rsum = lsum;
                } 
            } r--;
        }
        l++;
    } cout << ans << "\n";
    return 0;
}