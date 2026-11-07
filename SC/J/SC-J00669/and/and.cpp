#include <bits/stdc++.h>

using namespace std;
int n, m;
const int N = 2e5 + 10;
int a[N], vis[N];
int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) 
        scanf("%d", &a[i]);
    int ans = 0;
    for(int i = 30; i >= 0; i--) {
        int cnt = 0;
        for(int j = 1; j <= n; j++) {
            if(vis[j]) continue;
            if((1 << i) & a[j]) cnt++;
        }
        // cerr << i << " " << cnt << "\n";
        if(cnt >= m) ans = ans | (1 << i);
        else continue;
        for(int j = 1; j <= n; j++)
            if(((a[j] >> i) & 1) == 0) vis[j] = 1;
    }
    printf("%d\n", ans);
}