#include <bits/stdc++.h>
using namespace std;   //65
char c[200005];

long long a[200005] = {0}, n, siz, F = 0, cnt = 0, cntt;
int main() {
	cin >> n;
	freopen("string.in", r, stdin);
	freopen("string.out", w, stdout);
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		siz = siz + a[i];
		a[i] = a[i] + a[i - 1];
	}
	cntt = siz;
	for (long long i = 1; i <= siz / 2; i++) {
		if (i > a[cnt]) {
			cnt++;
		}
		if (siz + 1 - i < a[cntt]) {
			cntt--;
		}
		if (c[cnt] != c[cntt]) {
			F++;
		}
	}
	cout << F;
	return 1;
}