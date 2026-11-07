#include<bits/stdc++.h>
#define pii pair<int,int>
#define int long long
using namespace std;
#define N 200005
struct node {
	int l, r;
	char c;
	bool pd (int x) {
		return x <= r && x >= l;
	}
} a[N];
char ch;
int n, m, p, ans;
int fd (int x) {
	for (int l = 1, r = n; l <= r;) {
		int mid = l + r >> 1;
		if (a[mid].r < x) l = mid + 1;
		else if (a[mid].l > x) r = mid - 1;
		else return mid;
	}
	return 0;
}
signed main() {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	ios::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	cin >> n;
	for (int i = 1, j; i <= n; i++) cin >> j >> ch, m += j, a[i] = {m - j + 1, m, ch};
	for (int i = 1; i <= n; i++) if (a[i].pd (m / 2) ) p = i;
	for (int i = 1; i <= p; i++) {
		int l = m - min (m / 2, a[i].r) + 1, r = m - a[i].l + 1, x = fd (l), y = fd (r);
		if (x == y) ans += (r - l + 1) * (a[x].c == a[i].c);
		else {
			ans += (a[x].r - l + 1) * (a[x].c == a[i].c) + (r - a[y].l + 1) * (a[y].c == a[i].c);
			for (int j = x + 1; j < y; j++) ans += (a[j].c == a[i].c) * (a[j].r - a[j].l + 1);
		}
	}
	cout << m / 2 - ans << '\n';
	return 0;
}
/*
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
*/