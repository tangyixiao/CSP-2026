#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node {
	int num;
	char c;
} a[200005];
int vis[30], pre[30], suf[30];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt = 0, sum = 0, f = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].num >> a[i].c;
		if (i > 1 && a[i].c != a[i - 1].c) {
			f = 1;
		}
		int id = a[i].c - '0' - 48;
		vis[id]++;
		if (vis[id] > 1) {
			if (pre[id] > suf[id]) {
				suf[id] += a[i].num;
			} else {
				pre[id] += a[i].num;
			}
		} else {
			pre[id] += a[i].num;
		}
//		cout << id << "*";
	}
//	for (int i = 1; i <= 30; i++) {
//		cout << i << " " << suf[i] << "\n";
//	}
	if (f == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= 26; i++) {
		if (suf[i] != 0) {
			cnt += abs(pre[i] - suf[i]);
		} else {
			sum += pre[i];
//			cout << cnt << " " << sum << "\n";
		}
	}
	sum = max(0LL, sum - cnt);
//	cout << sum;
	sum /= 2;
	cout << sum + cnt;

	return 0;
}