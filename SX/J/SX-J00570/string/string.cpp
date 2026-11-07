#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cnt = 1;
	cin >> n;
	c[0] = ';';
	for (int i = 1; i <= n; i++) {
		int aa;
		char cc;
		cin >> aa >> cc;
		if (cc != c[cnt - 1])
			a[cnt++] = aa, c[cnt - 1] = cc;
		else
			a[cnt - 1] += aa;
	}
	n = cnt - 1;
	int id = n;
	long long ans = 0;
	for (int i = 1; i <= n;) {
		if (id == i)
			break;
		if (c[i] != c[id])
			ans = ans + min(a[i], a[id]);
		if (a[i] < a[id]) {
			a[id] -= a[i];
			i++;
		} else if (a[i] == a[id]) {
			i++;
			id--;
			if (id < i)
				id++;
		} else {
			a[i] -= a[id];
			id--;
		}
	}
	cout << ans;
}