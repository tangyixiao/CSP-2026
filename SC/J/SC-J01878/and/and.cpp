#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 2e5 + 10;
int a[maxn], n, m;
vector<int> in;
ll ans = -1;

void dfs(int pos, int cnt) {
	if (cnt == m) {
		ll tmp = in[0];
		for (int i = 1; i < m; i ++ ) {
			tmp &= in[i];
		}
		ans = max(tmp, ans);
		return;
	}
	if (pos == n) return;
	in.push_back(a[pos + 1]);
	dfs(pos + 1, cnt + 1);
	in.pop_back();
	dfs(pos + 1, cnt);
}

int main() {
	freopen("and.in" "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) {
		cin >> a[i];
	} 
	if (n <= 20) {
		dfs(0, 0);
		cout << ans << "\n";
	}
	else {
		if (m == 1) {
			int tmp = -1;
			for (int i = 1; i <= n; i ++ ) {
				tmp = max(tmp, a[i]);
			} 
			cout << tmp << "\n";
		}
		else if (m == n) {
			int tmp = a[1];
			for (int i = 2; i <= n; i ++ ) {
				tmp &= a[i];
			}
			cout << tmp << "\n";
		} 
		else if (m == 2) {
			int tmp = -1;
			for (int i = 1; i <= n - 1; i ++ ) {
				for (int j = i + 1; j <= n; j ++ ) {
					tmp = max(tmp, a[i] & a[j]);
				}
			}
			cout << tmp << "\n";
		} 
		else {
			cout << rand() << "\n";
		}
	} 
	return 0;
}