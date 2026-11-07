#include <bits/stdc++.h>
using namespace std;

inline int rev(int x) {
    return INT_MAX - x;
}

inline bool cmp(int x, int y) {
    return x > y;
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[200005];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    if(m == 1) {
        cout << a[1];
        return 0;
    } else if(m == n) {
        int ans = a[1];
        for(int i = 2; i <= n; i++){
            ans &= a[i];
        }
        cout << ans;
    } else if(m == n - 1) {
        int ans = a[1];
        for(int i = 2; i <= n; i++){
            ans &= a[i];
        }
        int maxx = ans;
        for(int i = 1; i <= n; i++){
            maxx = max(maxx, ans & rev(a[i]));
        }
        cout << maxx;
    } else if(m == 2) {
        int ans = -1;
        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++){
                ans = max(ans, a[i] & a[j]);
            }
        }
        cout << ans;
    }
}