#include <bits/stdc++.h>
using namespace std;
char b[26];
long long a[10005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 'a')
			cout << 0;
		return 0;
	}
	return 0;
}
