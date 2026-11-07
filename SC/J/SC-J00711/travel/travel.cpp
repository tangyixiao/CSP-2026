#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
	} else {
		string p1 = s1.substr(0, 2);
		string p2 = s2.substr(0, 2);
		if (p1 != p2) {
			cout << "1000";
		} else {
			char a = s1[2], b = s2[2];
			if (a > b) swap(a, b);
			if (!((a == 'A' && b == 'B') || (a == 'A' && b == 'C') || (a == 'B' && b == 'C') || (a == 'D' && b == 'F')))
				cout << "1100";
			else {
				if (!((a == 'A' && b == 'B') || (a == 'B' && b == 'C') || (a == 'D' && b == 'F')))
					cout << "1110";
				else cout << "1111";
			}
		}
	}
	return 0;
}