#include<bits/stdc++.h>
using namespace std;
long long n, a[200010], ans = 0, m, maxn = 0, pre[200010], pre2[200010];
void dfs(int x, long long k, int cnt) {
    if(x == n + 1) {
        if(cnt == m) ans = max(ans, k);
        return ;
    }dfs(x + 1, k, cnt);
    if(k == 0) dfs(x + 1, a[x], cnt + 1);
    else dfs(x + 1, (k & a[x]), cnt + 1);
}bool cmp(long long a, long long b){return a > b;}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        maxn = max(maxn, a[i]);
    }pre[1] = a[1]; pre2[n] = a[n];
    for(int i = 2; i <= n; i ++) pre[i] = pre[i - 1] & a[i];
    for(int i = n - 1; i >= 1; i --) pre2[i] = pre2[i + 1] & a[i];
    if(n <= 20) {
        dfs(1, 0, 0);
        cout << ans;
        return 0;
    }if(m == 1) {
        cout << maxn;
        return 0;
    }if(m == n) {
        cout << pre[n];
        return 0;
    }if(m == 2 && n <= 1e4) {
        for(int i = 1; i <= n; i ++) {
            for(int j = i + 1; j <= n; j ++) ans = max(ans, a[i] & a[j]);
        }cout << ans;
        return 0;
    }if(m == n - 1) {
        for(int i = 1; i <= n; i ++) {
            ans = max(ans, pre[i - 1] + pre2[i + 1]);
        }cout << ans;
        return 0;
    }sort(a + 1, a + 1 + n, cmp);
    cout << a[m];
    return 0;
}