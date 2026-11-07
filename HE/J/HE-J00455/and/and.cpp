#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
#define int long long
typedef long long ll;
typedef pair <ll, char> pic;
int n ,m, a[N], ans, f[N];

signed main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i ++) cin >> a[i];
    for(int i = 30;i >= 0;i --) {
        int cnt = 0;
        for(int j = 1;j <= n;j ++) {
            if(a[j] >> i & 1) cnt ++;
        }
        if(cnt >= m) {
            for(int j = 1;j <= n;j ++) {
                if(a[j] >> i & 1) f[j] |= 1 << i;
            }
        }
    }
    sort(f + 1, f + 1 + n, greater <int>());
    ans = f[1];
    for(int i = 2;i <= m;i ++) {
        ans &= f[i];
    }
    cout << ans << endl;
    return 0;
}
/*
5 3
31 3 1 15 7
*/
