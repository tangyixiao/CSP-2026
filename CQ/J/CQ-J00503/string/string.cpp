#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int n, a[maxn], l, mid, sum;
char c[maxn];
string s, t, p;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) s += c[i];
		l += a[i];
	}
	mid = (l - 1) / 2;
	for (int i = 0; i <= mid; i++) {
		if (s[i] != s[l - i - 1]) sum++;
	}
	cout << sum;

	return 0;
}
