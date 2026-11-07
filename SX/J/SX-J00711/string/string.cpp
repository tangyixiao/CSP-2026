#include <bits/stdc++.h>
using namespace std;
char c[200100];
int n, a[200100], sum = 0, cnt = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		cnt += a[i];
	}
	for (int i = 1; i <= (n / 2); i++) {
		if (c[i] == c[cnt + 1 - i])
			sum += max(a[i], a[cnt + 1 - i]);
	}
	cout << sum;
	return 0;
}
