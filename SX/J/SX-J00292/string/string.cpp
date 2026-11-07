#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], z, r, l;
string s[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> s[i];
	z = 1, r = n;
	while (z <= r) {
		if (s[z] != s[r])
			l += abs(min(a[z], a[r]));
		if (a[z] < a[r]) {
			a[r] -= a[z];
			z++;
		} else if (a[z] > a[r]) {
			a[z] -= a[r];
			r--;
		} else
			z++, r--;
	}
	cout << l;
	return 0;
}
