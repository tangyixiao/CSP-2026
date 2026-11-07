#include <bits/stdc++.h>
using namespace std;

int main() {
	preopen("string.in", "r", stdin);
	preopen("string.out", "w", stdout);
	int n, q = 0, m;
	int a[1000001];
	char s[100000];
	cin >> n;
	m = n - 1;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> s[i];
	if (n % 2 == 0) {
		for (int i = 1; i <= n % 2; i++)
			if (s[i] != s[n % 2 + 1 - i])
				q = q + a[n % 2 + 1 - i];
	} else {
		for (int i = 1; i <= m % 2; i++)
			if (s[i] != s[m % 2 + 1 - i])
				q = q + a[m % 2 + 1 - i];
	}
	cout << q;
	return 0;
}
