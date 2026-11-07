#include <bits/stdc++.h>
using namespace std;
int a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	map<int, int> h;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		h[a[i]] = 0;
	}
	for (int i = 1; i <= n; i++) {
		map<int, bool> ma;
		stack<int> s;
		for (int j = i; j <= n; j++) {
			if (ma[a[j]] == 1) {
				while (s.top() != a[j]) {
					ma[s.top()] = 0;
					s.pop();
				}

			} else {
				ma[a[j]] = 1;
				s.push(a[j]);

			}
		}
		while (!s.empty()) {
			h[s.top()]++;
			s.pop();
		}
	}
	for (auto &i : h) {
		cout << i.second << " ";
	}
	return 0;
}
