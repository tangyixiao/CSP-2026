#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], sum = 0, pre[200005];
char c[200005], r[1000000009], s[1000000009];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	pre[0] = 0;
	pre[1] = a[1];
	for (int i = 2; i <= n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = pre[i - 1]; j <= pre[i]; j++) {
			s[j] = c[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		sum += a[i];
	}
	for (int i = 1; i <= sum; i++) {
		r[sum - i] = s[i];
	}
	long long cnt = 0;
	for (int i = 1; i <= sum; i++) {
		if (r[i] != s[i]) {
			cnt += 1;
		}
	}
	cout << cnt / 2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}