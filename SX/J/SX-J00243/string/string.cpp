#include <bits/stdc++.h>
using namespace std;
int n, ct;
int a[200005];
char b[200005];
string q;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		ct += a[i];
		for (int j = 1; j <= a[i]; j++) {
			q += b[i];
		}
	}
	int z = ct;
	ct /= 2;
	if (z % 2 == 0) {
		int st = 0;
		int xt = 0;
		int ans = 0;
		int bns = 0;
		string x = q.substr(1, ct + 1);
		string y = q.substr(ct + 1, z + 1);
		for (int i = 1; i <= ct; i++) {
			if (y[ans] != q[i]) {
				st++;
			}
			ans++;
		}
		if (st == 0) {
			cout << st;
			return 0;
		}
		for (int i = ct + 1; i <= z; i++) {
			if (x[bns] != q[i]) {
				xt++;
			}
		}
		cout << min(st, xt);
	}
	if (z % 2 != 0) {
		int st = 0;
		int xt = 0;
		int ans = 0;
		int bns = 0;
		string x = q.substr(1, ct);
		string y = q.substr(ct + 1, z + 1);
		for (int i = 1; i <= ct; i++) {
			if (y[ans] != q[i]) {
				st++;
			}
			ans++;
		}
		if (st == 0) {
			cout << st;
			return 0;
		}
		for (int i = ct + 2; i <= z; i++) {
			if (x[bns] != q[i]) {
				xt++;
			}
		}
		cout << min(st, xt);
	}
	return 0;
}