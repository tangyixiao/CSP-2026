#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
ll n, m, a[N], ans = -1;

vector<vector<int>> ranf() {
	vector<vector<int>> res(35, vector<int>(0));
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 30; j++) {
			if ((a[i] >> j) == 0) break;
			if ((a[i] >> j) & 1) {
				res[j].push_back(a[i]);
			} 
		}
	}
	return res;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	vector<vector<int>> t = ranf();
	for (auto i : t) {
		if (i.size() >= m) {
			ll cnt = i[(int)i.size() - m];
			for (int j = i.size() - m + 1; j < (int)i.size(); j++) {
				cnt &= i[j];
			}
			ans = max(ans, cnt);
		}
	}
	cout << ans << '\n';
	return 0;
}