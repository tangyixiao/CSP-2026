#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10, M = 3e5 + 10;
int n, m, a[N], Next[N], ans[M];
unordered_map<int, int> last;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i], last[a[i]] = i;
    for (int i = 1; i <= n; i++) if (i < last[a[i]]) Next[i] = last[a[i]];
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) {
            ans[a[j]]++;
            while (Next[j]) j = Next[j];
        }
    for (int i = 1; i <= m; i++) cout << ans[i] << " \n"[i == m];
    return 0;
}