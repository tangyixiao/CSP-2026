#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, ans = 0, b = 0;
	cin >> n;
	int a[n];
	char s[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> s[i];
		b += a[i];
	}
	char s1[b];
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i]; j++)
			s1[c] += s[i];
		c++;
	}
	for (int i = 0; i < b / 2 ; i++)
		if (s[i] != s[b - i - 1])
			ans++;
	cout << ans << endl;
	return 0;
}
