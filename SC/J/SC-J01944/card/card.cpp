#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5, M = 3e5+5;
int a[N], b[N], cnt, t[N];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> a[i];
	bool f = false;
	for (int i = 1; i <= n - 1; i++) {
		if (a[i] < a[i + 1])f = true;
		else {
			f = false;
			break;
		}
	}
	if (f) {
		for (int i = 1; i <= n; i++) {
			cnt++;
			if (a[i] != a[i + 1])cout << cnt << ' ';
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			int ind = find(b + 1, b + cnt + 1, a[j]) - b;
			if (ind == cnt + 1)b[++cnt] = a[j];
			else cnt = ind;
		}
		for (int j = 1; j <= cnt; j++) {
			t[b[j]]++;
		}
		cnt = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << ' ';
	}
	return 0;
}