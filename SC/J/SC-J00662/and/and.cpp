#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 2e5 + 5;
int n, m, a[N], f[N][2];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	if(m == n - 1) { // subtask:11,12
		int sum = a[1];
		for(int i = 2;i <= n;i ++) 
			sum &= a[i];
		int ans = INT_MIN;
		for(int i = 1;i <= n;i ++) 
			ans = max(ans, sum & a[i]);
		cout << ans;
		return 0;
	}
	if(m == 1) { // subtask:6
		int ans = INT_MIN;
		for(int i = 1;i <= n;i ++) 
			ans = max(ans, a[i]);
		cout << ans;
		return 0;
	}
	if(n <= 2000 && m == 2) { // subtask:8,9,10
		int ans = INT_MIN;
		for(int i = 1;i < n;i ++) 
			for(int j = i + 1;j <= n;j ++) 
				ans = max(ans, a[i] & a[j]);
		cout << ans;
		return 0;
	}
	if(n == m) { // subtask:7
		int ans = a[1];
		for(int i = 2;i <= n;i ++) 
			ans &= a[i];
		cout << ans;
		return 0;
	}
	f[1][1] = a[1];
	for(int i = 2;i <= n;i ++) 
		f[i][1] = max(f[i - 1][1], a[i]);
	for(int j = 2;j <= m;j ++) 
		for(int i = 1;i <= n;i ++) 
			f[i][j % 2] = max(f[i - 1][j % 2], f[i - 1][(j + 1) % 2] & a[i]);
	cout << f[n][m % 2];
	return 0;
}

/*

	f[i][j] = 前i个数选了j的最大值
	f[i][j] = max(f[i][j - 1], f[i - 1][j - 1] | a[i])

4 2
3 15 12 12

5 3
31 3 1 15 7

*/