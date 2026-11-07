#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], mn = -1;
bool f[200010];

//¸øµã·Ö°É
void func(int x, int num) {
	if (x == 1) {
		mn = max(mn, num);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (f[i] == 1)
			continue;
		f[i] = 1;
		func(x - 1, num &a[i]);
		f[i] = 0;
	}

}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>());
	if (m == 1)
		cout << a[1];
	else if (m == 2) {
		int maxx = -1;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxx = max(maxx, a[i] & a[j]);
			}
		}
		cout << maxx;
	} else if (m == n) {
		int d = a[1];
		for (int i = 2; i <= n; i++)
			d = d & a[i];
		cout << d;
	} else if (m == n - 1) {
		int d = a[1];
		for (int i = 2; i < n; i++)
			d = d & a[i];
		cout << d;
	} else {
		for (int i = 1; i <= n; i++) {
			f[i] = 1;
			func(m, a[i]);
			f[i] = 0;
		}
		cout << mn;
	}
	return 0;
}
