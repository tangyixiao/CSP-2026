#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long l = 0, r = n - 1, s = 0;
	int a[200005];
	char c[200005];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	while (l < r ) {
		if (a[r] == 0)
			r--;
		if (a[l] == 0)
			l++;
		int z = min(a[l], a[r]);
		if (c[l] != c[r])
			s += z;
		a[l] -= z;
		a[r] -= z;
	}
	cout << s ;
}

