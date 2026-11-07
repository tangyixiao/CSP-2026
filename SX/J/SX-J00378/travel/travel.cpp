#include <bits/stdc++.h>
using namespace std;
#define int long long
string a, b, c, d, ans;
string q = "A", w = "B", e = "C", r = "D", t = "F";

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		if (b[0] == d[0] && b[1] == d[1]) {
			if (b[2] == q[0] || b[2] == w[0] || b[2] == e[0]) {
				if (d[2] == q[0] || d[2] == w[0] || d[2] == e[0]) {
					if (b[2] == q[0]) {
						if (d[2] == w[0]) {
							cout << "1111";
							return 0;
						} else {
							cout << "1110";
							return 0;
						}
					} else {
						if (b[2] == w[0]) {
							if (d[2] == q[0] || d[2] == e[0]) {
								cout << "1111";
								return 0;
							} else {
								cout << "1110";
								return 0;
							}
						} else {
							if (b[2] == e[0]) {
								if (d[2] == w[0]) {
									cout << "1111";
									return 0;
								} else {
									cout << "1110";
									return 0;
								}
							} else {
								cout << "1110";
								return 0;
							}
						}
					}
				} else {
					cout << "1100";
					return 0;
				}
			} else {
				if (d[2] == r[0] || d[2] == t[0]) {
					cout << "1111";
					return 0;
				} else {
					cout << "1100";
					return 0;
				}
			}
		} else {
			cout << "1000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
