#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int qian, bai, shi, ge;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a != c) {
		qian = 0;
		bai = 0;
		shi = 0;
		ge = 0;
	} else {
		qian = 1;
		if (b[0] != d[0] || b[1] != d[1]) {
			bai = 0;
			shi = 0;
			ge = 0;
		} else {
			bai = 1;
			if (int(b[2]) - int(d[2]) != 1 && int(b[2]) - int(d[2]) != -1) {
				ge = 0;
				if ((b[2] == 'A' && d[2] == 'C') || (b[2] == 'C' && d[2] == 'A')) {
					shi = 1;
				} else {
					shi = 0;
				}
			} else {
				if ((b[2] == 'C' && d[2] == 'D') || (b[2] == 'D' && d[2] == 'C')) {
					ge = 0;
					shi = 0;
				} else {
					ge = 1;
					shi = 1;
				}
			}
		}
	}
	cout << qian << bai << shi << ge;
	return 0;
}
