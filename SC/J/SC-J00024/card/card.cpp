#include <bits/stdc++.h>

#define int long long

using namespace std;

constexpr int N = 5e5 + 10;

int n, m;

int a[N];

map<int, int> ma;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		set<int> s;
		for (int j = i; j <= n; j++) {
			s.insert(a[j]);
			if (s.size() != j - i + 1) {
				s.erase(s.lower_bound(a[j]), s.end());
				s.insert(a[j]);
			}
		}
		for (auto x : s) {
			ma[x]++;
		}
	}

	for (int i = 1; i <= m; i++) {
		cout << ma[i] << " ";
	}

	cout << '\n';

	return 0;
}
