#include <bits/stdc++.h>
using namespace std;
#define int long long
#define D(a) cout << #a << " : " << a << " "
#define nl cout << '\n'
const int N = 2e5 + 10;
int ans;
int a[N]; char c[N];
int n;
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false); cin.tie(nullptr); 
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i] >> c[i];
    int l = 1,r = n;
    while (l < r){
        int del = min(a[l],a[r]);
        if (c[l] != c[r]) ans += del;
        a[l] -= del; a[r] -= del;
        if (!a[l]) l++;
        if (!a[r]) r--;
    }
    cout << ans;
    return 0;
}
