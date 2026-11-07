#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long len = 0, mid, m = 0;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = len / 2 + 1;
	for (int i = 0; i < mid; i++) {
		if (s[i] != s[len - i - 1])
			m++;
	}
	cout << m;
	return 0;
}