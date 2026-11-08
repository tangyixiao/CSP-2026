#include <bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
int n, m, a[N], t[35];
bool ans[35];
vector<int> v, k;
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	k = v;
	bool fst = false;
	for (int i = 30; i >= 0; i--) {
		vector<int> t;
		for (int xx : v) if ((xx >> i) & 1) t.push_back(xx);
		if (t.size() >= m) {
			ans[i] = true; fst = true;
		}
	//	for (int xx : t) cout << xx << " ";
	//	cout << '\n';
		v = t;
		if (!fst) v = k;
	}
//	for (int i = 30; i >= 0; i--) cout << ans[i];
//	cout << '\n';
	int res = 0;
	for (int i = 0; i <= 30; i++) res = res + (1 << i) * ans[i];
	cout << res << '\n';
	return 0;
}

