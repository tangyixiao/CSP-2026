#include <bits/stdc++.h>//ºìAC
using namespace std;
bool f[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		f[1] = 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			f[2] = 1;
			int a = s1[2] - 'A';
			int b = s2[2] - 'A';
			//cout << a << ' ' << b << '\n';
			if ((a < 3 && b < 3) || (a >= 3 && b >= 3)) {
				f[3] = 1;
				if (abs(a - b) == 1)
					f[4] = 1;
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		if (f[i])
			cout << 1;
		else
			cout << 0;
	}
	return 0;
}
//Trick||Treat!
