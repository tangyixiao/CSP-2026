#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2, cnt = 0;
	cin >> c1;
	string s1, s2;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	if (c1 == c2) {
		cout << 1 << " ";
		cnt++;
	} else {
		cout << 0 << " ";
	}
	if (s1.size() == s2.size()) {
		cout << 1 << " ";
		cnt++;
	} else {
		cout << 0 << " ";
	}
	if (s1.size() == 'F' || s1.size() == 'D' && s2.size() == 'F' || s2.size() == 'D') {
		cout << 1 << " ";
		cnt++;
	} else if (s1.size() == 'A' || s1.size() == 'B'  && s2.size() == 'A' || s2.size() == 'B') {
		cout << 1 << " ";
		cnt++;
	} else if (s1.size() == 'C' || s1.size() == 'B' && s2.size() == 'C' || s2.size() == 'B') {
		cout << 1 << " ";
		cnt++;
	} else if (s1.size() == 'C' || s1.size() == 'A' && s2.size() == 'C' || s2.size() == 'A') {
		cout << 1 << " ";
		cnt++;
	}

	else {
		cout << 0 << " ";
	}
	if (cnt == 3)
		cout << 1;
	else
		cout << 0;
	return 0;
}
