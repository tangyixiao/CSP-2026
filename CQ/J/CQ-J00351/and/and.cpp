#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace hz {
	int n, m;
	int a[200005];
	string s[200005];
	inline string to_2(int x) {
		vector<int>c;
		while (x) {
			c.push_back(x % 2);
			x /= 2;
		}
		reverse(c.begin(), c.end());
		string ans = "";
		for (int i = 0; i < c.size(); i++) {
			ans += to_string(c[i]);
		} 
		return ans;
	}
	inline int to_10(string x) {
		int base = 1, ans = 0;
		reverse(x.begin(), x.end());
		for (int i = 0; i < x.size(); i++) {
			ans += (x[i] - '0') * base, base *= 2;
		}
		return ans;
	}
	vector<int>v;
	bool vis[100005];
	int maxx = 0;
	inline void dfs(int d) {
		if (d == m + 1) {
			int ans = v[0];
			for (int i = 1; i < v.size(); i++) {
				ans &= v[i];
			}
			maxx = max(maxx, ans);
			return ;
		}
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				vis[i] = 1;
				v.push_back(a[i]);
				dfs(d + 1);
				v.pop_back();
				vis[i] = 0;
			}
		}
	} 
	signed main() {
		freopen("and.in", "r", stdin);
		freopen("and.out", "w", stdout);
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> a[i], s[i] = to_2(a[i]);
		}
		if (n == m) {
			int ans = a[1]; 
			for (int i = 2; i <= n; i++) {
				ans &= a[i];
			}
			cout << ans << endl;
			return 0;
		}
		if (n <= 12 && m <= 12) {
			dfs(1);
			cout << maxx << endl;
			return 0;
		}
		sort(s + 1, s + 1 + n, greater<string>());
		int ans = to_10(s[1]);
		for (int i = 2; i <= m; i++) {
			ans &= to_10(s[i]);
		}
		cout << ans << endl;
		return 0;
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	hz::main();
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
