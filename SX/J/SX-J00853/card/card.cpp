#include <bits/stdc++.h>//黄/绿 16(特殊性质A)+24(暴力)+8(m<=2)=48
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int f[M];
int a[N];
int ans[M];
int d[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	bool f1 = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			f1 = 0;
	}
	if (f1) {//O(n+m) 16分(特殊性质A)
		for (int i = 1; i <= n; i++) {
			if (ans[a[i]] == 0)
				ans[a[i]] += i;
			else
				ans[a[i]]++;
		}
		for (int i = 1; i <= m; i++)
			cout << ans[i] << ' ';
		return 0;
	}
	if (m == 1) {//8
		cout << n;
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			if (a[i] == a[n])
				ans[a[i]]++;
			else
				ans[a[i]]++, ans[a[n]]++;
		}
		cout << ans[1] << ' ' << ans[2];
		return 0;
	}
	for (int k = 1; k <= n; k++) {//24 O(n^3)
		memset(f, 0, sizeof(f));
		memset(d, 0, sizeof(d));
		int len = 0;
		for (int i = k; i <= n; i++) {
			if (f[a[i]] == 0) {
				f[a[i]] = ++len;
				d[len] = a[i];
			} else {
				len = f[a[i]];
				for (int j = len + 1; d[j]; j++) {
					f[d[j]] = 0;
					d[j] = 0;
				}
			}
		}
		for (int i = 1; i <= len; i++)
			ans[d[i]]++;
		/*for (int i = 1; i <= len; i++)
			cout << d[i] << ' ';
		cout << '\n';*/
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
