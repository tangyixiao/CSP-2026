#include <bits/stdc++.h>
using namespace std;

void f(int x) {
	if (x == 0) {
		cout << 0;
	} else {
		cout << 1;
	}
	return ;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int q = 1;
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		q = 0;
	}
	f(q);
	if (s1[0] != s2[0] || s1[1] != s2[1]) {
		q = 0;
	}
	f(q);
	if ((s1[2] >= 'D' && s2[2] <= 'C') || (s1[2] <= 'C' && s2[2] >= 'D')) {
		q = 0;
	}
	f(q);
	if ((s1[2] == 'C' && s2[2] == 'A') || (s1[2] == 'A' && s2[2] == 'C')) {
		q = 0;
	}
	f(q);
	return 0;
}