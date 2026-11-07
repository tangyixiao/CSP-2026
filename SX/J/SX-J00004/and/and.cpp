#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	using ywm = long long;
	ywm n, m;
	cin >> n >> m;
	vector<ywm> v;
	for (ywm i = 1; i <= n; i++) {
		ywm x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	ywm it = v.size();
	ywm a = v[it - 1];
	for (int i = 2; i <= m; i++)
		a &= v[it - i];
	cout << a;
	return 0;
}
