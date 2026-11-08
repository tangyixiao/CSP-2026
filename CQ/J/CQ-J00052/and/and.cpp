#include<iostream>
#include<algorithm>
using namespace std;
int n, m, a[200004],mx = 0, vis[200004], cf_2[31] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
void dfs(int x, int id, int cnt) {
    if (x == -1) {
        mx = max(mx, cnt);
        return;
    }
    cnt &= a[id];
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            vis[i] = 1;
            dfs(x - 1, i, cnt);
            vis[i] = 0;
        }
    }
}
int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d %d", &n, &m);
    bool f = true;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        bool flag = false;
        for (int j = 0; j < 31; j++) {
            if (a[i] - 1 == cf_2[j]) {
                flag = true;
            }
        }
        if (!flag) {
            f = false;
        }
    }
    if (f) {
        sort(a + 1, a + 1 + n, greater<int>());
        mx = a[m];
    }
    else if (m == 1) {
        for (int i = 1; i <= n; i++) {
            mx = max(mx, a[i]);
        }
    }
    else if (m == 2) {
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                mx = max(mx, a[i] & a[j]);
            }
        }
    }
    else if (m == 3) {
        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    mx = max(mx, a[i] & a[j] & a[k]);
                }
            }
        }
    }
    else if (m == n) {
        int ans = a[1];
        for (int i = 2; i <= n; i++) {
            ans &= a[i];
        }
        mx = max(mx, ans);
    }
    else {
        for (int i = 1; i <= n; i++) {
            vis[i] = 1;
            dfs(m - 1, i, a[i]);
            vis[i] = 0;
        }
    }
    printf("%d", mx);
    return 0;
}
