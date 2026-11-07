#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

struct in {
	int xc;
	char v;
} c[N];
long long s = 0, n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c[i].xc);
		cin >> c[i].v;
	}
	int l = 1, k = n;

	while (l < k) {
		if (c[l].v == c[k].v) {
			if (c[l].xc < c[k].xc) {
				c[k].xc = c[k].xc - c[l].xc;
				l++;
			} else if (c[l].xc > c[k].xc) {
				c[l].xc = c[l].xc - c[k].xc;
				k--;
			} else {
				l++;
				k--;
			}
		} else {
			if (c[l].xc < c[k].xc) {
				c[k].xc = c[k].xc - c[l].xc;
				s = s + c[l].xc;
				l++;
			} else if (c[l].xc > c[k].xc) {
				c[l].xc = c[l].xc - c[k].xc;
				s = s + c[k].xc;
				k--;
			} else {
				l++;
				s = s + c[k].xc;
				k--;
			}
		}
	}
	cout << s;
	return 0;
}
