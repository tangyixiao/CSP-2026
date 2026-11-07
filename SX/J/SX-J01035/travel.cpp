#include <bits/stdc++.h>
using namespace std;
const int N = 55;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	char c1[N], s1[N], c2[N], s2[N];
	for (int i = 0; i <= 1; i++)
		cin >> c1[i];
	for (int i = 0; i <= 2; i++)
		cin >> s1[i];
	for (int i = 0; i <= 1; i++)
		cin >> c2[i];
	for (int i = 0; i <= 2; i++)
		cin >> s2[i];
	if (c1[0] == c2[0] && c1[1] == c2[1]) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') {
				cout << 1;
				if (abs(s1[2] - s2[2]) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}