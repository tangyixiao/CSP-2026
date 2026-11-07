#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string tr1, tr2, p1, p2;
	cin >> tr1 >> p1 >> tr2 >> p2;
	if (tr1 == tr2)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	if (p1[0] == p2[0] && p1[1] == p2[1])
		cout << 1;
	else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (p1[2] >= 'A' && p1[2] <= 'C') {
		if (p2[2] >= 'A' && p2[2] <= 'C') {
			cout << 1;
			if (abs(p1[2] - p2[2]) == 1)
				cout << 1;
			else
				cout << 0;
		} else {
			cout << 0 << 0;
		}
	} else {
		if (p2[2] == 'D' || p2[2] == 'F') {
			cout << 1 << 1;
		} else
			cout << 0 << 0;
	}
	return 0;
}
