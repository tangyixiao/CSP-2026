#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int t = a.size(), x = c.size();
	int sum = 0, ans = 0;
	for (int i = 0; i < t; i++) {
		if (a[i] != c[i])
			cout << "0";
		else
			sum++;
	}
	if (sum == t)
		cout << "1";
	int y = b.size(), m = d.size();
	for (int j = 0; j < y; j++) {
		if (j < 2) {
			if (b[j] != d[j])
				cout << "0";
			else
				ans++;
		} else {
			if (ans == 2)
				cout << "1";
			if (b[j] == 'A' && d[j] == 'B') {
				cout << "1" << "1";
				return 0;
			}
			if (b[j] == 'C' && d[j] == 'D' || b[j] == 'D' && d[j] == 'E') {
				cout << "1" << "1";
				return 0;
			} else {
				cout << "1" << "0";
				return 0;
			}
		}
	}
	return 0;
}
