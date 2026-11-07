#include <bits/stdc++.h>
using namespace std;
long long n, cnt = 0, ans = 0, sum = 0, t, mj = 0;

struct st {
	long long m;
	char c;
} a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].m >> a[i].c;
		cnt += a[i].m;
		if (a[i].c == a[i - 1].c) {
			a[i - 1].m += a[i].m;
			n--;
			i--;
		}
	}
	for (int i = 1; i <= n / 2; i++) {
		if (a[i].c == a[n - i + 1].c) {
			mj += min(a[i].m, a[n - i + 1].m);
		}
	}
	cnt = cnt / 2;
	cout << cnt - mj;
	return 0;
}