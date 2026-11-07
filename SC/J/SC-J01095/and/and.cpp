#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5; 
int n, m;
int a[N], dp[N];
bool flag1 = true, flag2 = true; 
map <int, int> mp;
bool cmp(int x, int y) {
	return x > y;
}
signed main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int sum = 1;
	for (int i = 1; i <= 31; i++) {
		mp.insert({i, sum});
		sum *= 2;
	}
	int maxn = 0; 
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
		if (mp.count(a[i] - 1))  {
			flag1 = false;
		}
		if (a[i] != i - 1) {
			flag2 = false;
		}
	}
	if (flag1) {
		sort(a + 1, a + n + 1, cmp);
		cout << a[m];
	} else if (flag2) {
		cout << n - m;
	} else {
		sort(a + 1, a + n + 1);
		const int X = INT_MAX;
		for (int i = 1; i <= n; i++) {
			dp[0] = X;
			for (int j = m; j >= 1; j--) {
				dp[j] = max(dp[j], dp[j - 1] & a[i]);
			}
		}
		cout << dp[m];
	}
	return 0;
}