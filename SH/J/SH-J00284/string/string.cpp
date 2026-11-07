#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node {
	ll a;
	char c;
} f[200010], l[200010], r[200010];
int cnt1 = 0, cnt2 = 0;
ll cmp() {
	ll res = 0;
	int i = 1, j = 1;
	while (i <= cnt1 && j <= cnt2) {
		if (l[i].a < r[j].a) {
			if (l[i].c != r[j].c) {
				res += l[i].a;
			}
			r[j].a -= l[i].a;
			i++;
		} else if (l[i].a > r[j].a) {
			if (l[i].c != r[j].c) {
				res += r[j].a;
			}
			l[i].a -= r[j].a;
			j++;
		} else {
			if (l[i].c != r[j].c) {
				res += l[i].a;
			}
			i++, j++;
		}
	}
	return res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	ll sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> f[i].a >> f[i].c;
		sum += f[i].a;
	}
	ll num = 0;
	for (int i = 1; i <= n; i++) {
		if (num == sum / 2) {
			break;
		}
		if (num + f[i].a <= sum / 2) {
			l[++cnt1] = {f[i].a, f[i].c};
			num += f[i].a;
		} else {
			l[++cnt1] = {sum / 2 - num, f[i].c};
			num = sum;
			break;
		}
	}
	num = 0;
	for (int i = n; i >= 1; i--) {
		if (num == sum / 2) {
			break;
		}
		if (num + f[i].a <= sum / 2) {
			r[++cnt2] = {f[i].a, f[i].c};
			num += f[i].a;
		} else {
			r[++cnt2] = {sum / 2 - num, f[i].c};
			num = sum;
			break;
		}
	}
	cout << cmp();
	return 0;
}
