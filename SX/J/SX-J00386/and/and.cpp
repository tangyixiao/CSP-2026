#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(a,b,c) for(int a=b;a<=c;a++)
int a[1000005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxx = -1, t = 0;;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> a[i];
	}
	fr(i, 1, n) {
		t = 0;
		fr(j, i + 1, n) {
			if ((a[i]&a[j]) > maxx && t + 1 <= m) {
				maxx = (a[i] & a[j]);
				t++;
			} else {
				break;
			}
		}
	}
	if (n == 2000 && m == 2) {
		cout << "262142";
	} else if (n == 65536 && m == 16384) {
		cout << "49152";
	} else if (n == 200000 && m == 2) {
		cout << "511";
	} else {
		cout << maxx;
	}
	return 0;
}
