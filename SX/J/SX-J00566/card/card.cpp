#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m, a[N], sum[N];
unordered_multiset<int> s;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= m; i++) {
			cout << n << " ";
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		s.clear();
		for (int j = i; j <= n; j++) {
			if (s.count(a[j]) == 0) {
				s.insert(a[j]);
			} else
				s.clear();
		}
		for (int j = 1; j <= n; j++) {
			if (s.count(j) != 0)
				sum[j]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}
