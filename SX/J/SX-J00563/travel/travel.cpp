#include <bits/stdc++.h>
using namespace std;
string n1, n, m1, m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> n1 >> n >> m1 >> m;
	if (n1 == m1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n1 == m1 && n[0] == m[0] && n[1] == m[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n1 == m1 && n[0] == m[0] && n[1] == m[1] && ((n[2] >= 'A' && n[2] <= 'C' && m[2] >= 'A' && m[2] <= 'C')
	        || (n[2] >= 'D' && n[2] <= 'F' && m[2] >= 'D' && m[2] <= 'F'))) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n1 == m1 && n[0] == m[0] && n[1] == m[1] && ((n[2] >= 'A' && n[2] <= 'C' && m[2] >= 'A' && m[2] <= 'C')
	        || (n[2] >= 'D' && n[2] <= 'F' && m[2] >= 'D' && m[2] <= 'F')) && (n[2] == m[2] + 1 || n[2] == m[2] - 1 || (n[2] >= 'D'
	                && n[2] <= 'F' && m[2] >= 'D' && m[2] <= 'F'))) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
