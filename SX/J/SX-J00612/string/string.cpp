#include <bits/stdc++.h>
using namespace std;
char s[200005];
long long a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long ans = 0;
	string z = "";
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> s[i];
		for (long long j = 1; j <= a[i]; j++)
			z += s[i];
	}
	for (int k = 0; k < int(z.size() / 2); k++) {
		if (z[k] == z[z.size() - k - 1])
			continue;
		ans++;
	}
	cout << ans;
	return 0;
}
