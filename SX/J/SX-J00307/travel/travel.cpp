#include <bits/stdc++.h>
using namespace std;

string c1, c2, s1, s2;
bool pd = false, jd = false;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		jd = true;
	} else {
		cout << 0;
	}
	if (jd && s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << 1;
		pd = true;
	} else {
		cout << 0;
	}
	if (pd && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C'))) {
		cout << 1;
	} else {
		cout << 0;
		pd = false;
	}
	if (!pd) {
		cout << 0;
	} else {
		if (s1[2] > 'C') {
			cout << 1;
		} else {
			if ((s1[2] <= 'B' && s2[2] <= 'B') || (s1[2] >= 'B' && s2[2] >= 'B')) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
	}
	return 0;
}
