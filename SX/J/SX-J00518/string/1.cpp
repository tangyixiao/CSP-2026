#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, l = 0, ans = 0;
string s1 = "";
bool ff = 1;
char sg = '0';
const int N = 2e5+5;
int a[N];
char c[N];

struct node {
	int l, r;
	char x;
};
vector<node>v;

signed main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (i != 1 and v.back().x == c[i]) {
			v.back().r = v.back().r + a[i];
		} else {
			v.push_back({l + 1, l + a[i], c[i]});
		}
		l += a[i];
		if (sg != '0' and c[i] != sg) {
			ff = 0;
		}
		sg = c[i];
		cout << v.back().l << ' ' << v.back().r << endl;
	}

	if (ff) {
		cout << 0;
		return 0;
	}

	int ll = 0, rr = v.size() - 1;
	while (ll < rr) {
		if (v[rr].l != l + 1 - v[ll].r) {
			ans += abs((l + 1 - v[ll].r) - v[rr].l);
			v[rr].l = l + 1 - v[ll].r;
			v[rr - 1].r = v[rr].l - 1;
			cout << v[rr].l << ' ' << v[rr].r << endl;
		}
		ll++, rr--;
	}
	cout << ans;
	return 0;
}
