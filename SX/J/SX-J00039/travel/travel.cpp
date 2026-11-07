#include <bits/stdc++.h>
using namespace std;
long long M = 0, A = 0, R = 0, E = 0;
char m[4], a[4], r[4], e[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> m >> a >> r >> e;
	if (m[0] == r[0]) {
		if (m[1] == r[1]) {
			M = 1;
			if (a[0] == e[0]) {
				if (a[1] == e[1]) {
					A = 1;
					int t = a[2], u = e[2];
					if (t >= 68 && u >= 68) {
						R = 1;
						E = 1;
					} else if (t < 68 && u < 68) {
						R = 1;
						if (t == u + 1 || t == u - 1) {
							E = 1;
						}
					}
				}
			}
		}
	}
	cout << M << A << R << E;
}
