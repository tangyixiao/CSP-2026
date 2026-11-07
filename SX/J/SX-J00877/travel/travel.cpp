#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

bool solve1(string x, string y) {
	for (int i = 0; i < x.size(); i++) {
		if (x[i] != y[i]) {
			return false;
		}
	}
	return true;
}

bool solve2(string x, string y) {
	for (int i = 0; i < x.size() - 1; i++) {
		if (x[i] != y[i]) {
			return false;
		}
	}
	return true;
}

bool solve3(string x, string y) {
	int j = x.size() - 1;
	if ((x[j] == 'A' || x[j] == 'B' || x[j] == 'C') && (y[j] == 'A' || y[j] == 'B' || y[j] == 'C')) {
		return true;
	} else if ((x[j] == 'E' || x[j] == 'F') && (y[j] == 'E' || y[j] == 'F')) {
		return true;
	} else {
		return false;
	}
}

bool solve4(string x, string y) {
	int j = x.size() - 1;
	if (abs(x[j] - y[j]) == 1) {
		return true;
	} else {
		return false;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (solve1(c1, c2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (solve1(c1, c2) && solve2(s1, s2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (solve1(c1, c2) && solve2(s1, s2) && solve3(s1, s2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (solve1(c1, c2) && solve2(s1, s2) && solve3(s1, s2) && solve4(s1, s2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}