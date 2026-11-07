#include <bits/stdc++.h>
using namespace std;
long long n, sum = 0,  cnt = 0;
int a[200005];
string c[2000000005], f[2000000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	for (int i = 1; i <= sum; i++) {
		f[a[i]] = c[a[i]];
	}
	for (int i = 0; i < sum; i++) {
		if (f[i] != f[sum - 1 - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}