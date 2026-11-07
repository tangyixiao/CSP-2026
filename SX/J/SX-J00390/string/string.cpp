#include <bits/stdc++.h>
#define int long long
using namespace std;

struct node {
	int shu;
	string name;
};
const int N = 2e5+5;
string s;
int k, n, l = 1, r, cnt;
node a[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	r = n + 1;
	for (int i = 1; i <= n; i++) {
		cin >> k >> s;
		a[i].name = s;
		a[i].shu = k;
	}
	while (l < r) {
		if (a[l].name == a[r].name) {
			if (a[l].shu > a[r].shu) {
				a[l].shu -= a[r].shu;
				r--;
			} else if (a[l].shu < a[r].shu) {
				a[r].shu -= a[l].shu;
				l++;
			} else {
				l++;
				r--;
			}
		} else {
			cnt += min(a[l].shu, a[r].shu);
			if (a[l].shu > a[r].shu) {
				a[l].shu -= a[r].shu;
				r--;
			} else if (a[l].shu < a[r].shu) {
				a[r].shu -= a[l].shu;
				l++;
			} else {
				l++;
				r--;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}