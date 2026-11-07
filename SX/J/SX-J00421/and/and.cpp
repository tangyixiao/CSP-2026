#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
int c[200005], a[50];

int rjz(int x) {
	int k = 0, sum = 0;
	while (x != 0) {
		a[++k] = x % 2;
		x /= 2;
	}
	fr(i, 1, k) {
		if (a[k] == 1)
			sum++;
	}
	return sum;
}

struct node {
	int ydgs, s;
} b[200005];

bool cmp(node x, node y) {
	return x.ydgs > y.ydgs;
}

signed main() {
	freopen("and.in", "w", stdin);
	freopen("and.out", "r", stdout);
	int n, m, ans = 1;
	cin >> n >> m;
	fr(i, 1, n)
	cin >> c[i];
	fr(i, 1, n) {
		b[i].s = c[i];
		b[i].ydgs = rjz(c[i]);
	}
	sort(b + 1, b + n + 1, cmp);
	fr(i, 1, m) {
		ans = (ans &b[i].s);
	}
	cout << ans;
	return 0;
}