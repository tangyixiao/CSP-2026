#include <bits/stdc++.h>
using namespace std;

struct jgt {
	int sz;
	char zf;
} e[200005];
int a, l, r;
jgt b[200005];
long long  mya;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a;
	l = 1;
	r = a;
	for (int i = 1; i <= a; i++) {
		cin >> b[i].sz >> b[i].zf;
	}
	for (int i = 1; r > l; i++) {
		if (b[r].zf == b[l].zf) {
			b[r].sz = abs(b[r].sz - b[l].sz);
			l++;
		} else {
			if (b[r].sz == b[l].sz) {
				mya += b[r].sz;
				r--;
				l++;
			} else {
				if (b[r].sz > b[l].sz) {
					mya += b[l].sz;
					b[r].sz -= b[l].sz;
					l++;
				} else {
					mya += b[r].sz;
					b[l].sz -= b[r].sz;
					r--;
				}
			}
		}
	}
	cout << mya;
	return 0;
}
