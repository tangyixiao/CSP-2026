#include <bits/stdc++.h>
using namespace std;
char zm[200010], qfz;
long long zj, sl[200010], sr, q, bj, p, qfs, ans, f, zj1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> sr;
	int srs;
	char srz;
	for (int i = 1; i <= sr; i++) {
		cin >> srs >> srz;
		zj += srs;
		if (i != 1 && zm[i - 1] == srz) {
			sl[i - 1] += srs;
			sr--;
		} else {
			sl[i] = srs;
			zm[i] = srz;
		}
	}
	if (sr == 1) {
		cout << 0;
		return 0;
	}
	if (zj % 2 == 0)
		q = zj / 2;
	else
		q = zj / 2 + 1;
	for (int i = 1; i <= sr; i++) {
		zj1 += sl[i];
		if (bj == 2) {
			int zhs = 0;
			char zhzm;
			zhs = sl[i];
			zhzm = zm[i];
			sl[i] = qfs;
			zm[i] = qfz;
			qfs = zhs;
			qfz = zhzm;
		}
		if (zj1 >= q && bj == 0) {
			bj = 1;
			if (zj % 2 == 1) {
				sl[i] -= 1;
				zj1--;
			}
			if (zj1 != q) {
				bj = 2; //fenduanyong
				qfz = zm[i];
				qfs = zj - q;
				sl[i] -= qfs;
				sr++;
			}
			f = i - 1;
		}
	}
	int dc = sr - f;
	if (f == dc) {
		f--;
		dc++;
	}
	for (int i = f ; i >= 1; i--) {
		if (zm[i] == zm[dc]) {
			if (sl[i] == sl[dc]) {
				sl[i] = 0;
				sl[dc] = 0;
			} else if (sl[i] > sl[dc]) {
				ans += sl[i] - sl[dc];
				sl[i] -= sl[i] - sl[dc];
				sl[dc] -= sl[i] - sl[dc];
			} else if (sl[i] < sl[dc]) {
				ans += (sl[dc] - sl[i]);
				sl[i] += sl[i] - sl[dc];
				sl[dc] += sl[i] - sl[dc];
			}
		}
		if (zm[i] != zm[dc]) {
			if (sl[i] == sl[dc]) {
				ans += sl[i];
				sl[i] = 0;
			} else {
				if (sl[i] > sl[dc]) {
					ans += sl[i] - sl[dc];
					sl[i] += sl[dc] - sl[i];
					sl[dc] += sl[dc] - sl[i];
				} else if (sl[i] < sl[dc]) {
					ans += sl[dc] - sl[i];
					sl[i] -= sl[dc] - sl[i];
					sl[dc] -= sl[dc] - sl[i];
				}
			}
		}
		if (sl[i] > 0)
			i++;
		if (sl[dc] <= 0)
			dc++;
	}
	cout << ans;
	return 0;
}
