#include <bits/stdc++.h>
using namespace std;
string s, ss;
int a[500005], n, m, ans = 1, t[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int x = n;
	stack<int> abc;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (x--) {
		s = " ";
		ss = " ";
		abc.empty();
		for (int i = ans; i <= n; i++) {
			if (s.find(a[i]) >= 10000000) {
				s += a[i];
				abc.push(a[i]);
			} else {
				abc.empty();
				abc.push(a[i]);
			}
		}
		for (int j = 1; j <= abc.size(); j++) {
			t[abc.top()]++;
			abc.pop();
		}
		ans++;
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << "/n";
	}

	return 0;
}