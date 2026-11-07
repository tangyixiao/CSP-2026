#include <bits/stdc++.h>
using namespace std;

long long a[1000005];

int main() {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);

	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] != a[n - i + 1])
			cnt++;
	}
	cout << cnt;
	return 0;
}
