#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int a[N], ans = 0, vis[N];
int b[N], po[N]; 
int n, m;
void dfs(int k, int sum) {
	if(k == m + 1) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if(vis[i] != 1) {
			vis[i] = 1;
			dfs(k + 1, sum & a[i]);
			vis[i] = 0;
		}
	}
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	po[0] = 1;
	for(int i = 1; i <= 30; i++) {
		po[i] = po[i - 1] * 2ll;
	}
	int gnt = 0;
	for (int i = 1; i <= 4; i++) {
		for(int j = 1; j <= 4; j++) {
			b[++gnt] = i & j;
		}
	}
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i]; 
	sort(a + 1, a + n + 1);
	if(n <= 20) {
		for (int i = 1; i <= n; i++) {
			vis[i] = 1;
			dfs(1, a[i]); 
			vis[i] = 0;
		}
		cout << ans;
		return 0;
	}
	if(m == 1) {
		cout << a[n];
		return 0;
	}
	if(m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 2) {
		int cnt = 0;
		for(int i = 1; i <= n; i++) {
			cnt = a[i];
			for (int j = i + 1; j <= n; j++) {
				cnt &= a[j];
				ans = max(cnt, ans);
			}
		}
		cout << ans;
		return 0;
	}
	int flag = 0, flag1 = 0;
	for (int i = 1; i <= n; i++) {
		if(a[i] > 4) flag1 = 1;
		for(int j = 0; j <= 30; j++) {
			if(a[i] != po[j] - 1) flag = 1;
		}
	}
	if(flag == 0) {
		cout << a[n - m + 1];
		return 0;
	}
	if(flag1 == 0) {
		for (int i = 1; i <= n; i++) vis[a[i]++];
		if(vis[4] >= m) cout << 4;
		else if(vis[3] >= m) cout << 3;
		else if(vis[2] + vis[4] >= m) cout << 2;
		else if(vis[1] + vis[3] >= m) cout << 1;
		else cout << 0;
		return 0;
	}
	return 0;
}