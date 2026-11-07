#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];
int maxn = -2e9;
int x = (1 << 31) - 1;
void dfs(int p, int sum, int last){
    if (n - last < m - p + 1) return;
    if (p > m){
        maxn = max(maxn, sum);
        return;
    }
    for (int i = last + 1; i <= n; i++){
        dfs(p + 1, sum & a[i], i);
    }

}
int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    int ans = x;
    bool fga = true;
    for (int i = 1; i <= n ;i++){
        cin >> a[i];
        ans &= a[i];
        if (a[i] | 0 != a[i])
            fga = false;

    }
    if (n <= 2000){
        dfs(1, x, 0);
        cout << maxn;
    }
    else if (m == n)
        cout << ans;
    else if (fga){
        sort(a + 1, a + n + 1);
        int cnt = 0;
        for (int i = n; i >= 1; i--){
            cnt++;
            if (cnt == m){
                cout << a[i];
                return 0;
            }
        }
    }
    else if (n | 0 == n){
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);
        int b = x;
        int cnt = 0;
        for (int i = 1; i <= n; i++){
            cnt++;
            b &= a[i];
            if (cnt == m){
                cout << b;
                return 0;
            }
        }
    }
    return 0;
}
