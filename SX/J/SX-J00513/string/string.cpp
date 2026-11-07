#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
int n, num, cnt, va[N], vb[N];
ll a[N], b[N], len, ans, suma, sumb;
char c[1], last;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d%s", &num, c);
		len += num;
		if (c[0] == last)
			a[cnt] += num;
		else
			a[++cnt] = num;
		va[cnt] = c[0];
		last = c[0];
	}
	for (int i = 1; i <= cnt; i++)
		b[i] = a[cnt - i + 1], vb[i] = va[cnt - i + 1];
	for (int i = 1, j = 1; i <= cnt; i++) {
		//cout << suma << " " << sumb << " " << i << " " << j << "\n";
		suma += a[i];
		suma = min(suma, len >> 1);
		while (sumb + b[j] <= suma) {
			if (va[i] != vb[j])
				ans += b[j];
			sumb += b[j];
			j++;
		}
		if (sumb + b[j] > suma) {
			if (va[i] != vb[j])
				ans += suma - sumb;
			b[j] -= suma - sumb;
			sumb = suma;
		}
	}
	cout << ans;
	return 0;
}
