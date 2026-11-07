#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2005;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long len = 0;
	long long ans = 0;
	long long a[MAXN];
	char ch[MAXN];
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> ch[i];
		len += a[i];
		if (ch[i] == ch[i - 1]) {
			a[i - 1] += a[i];
			n--;
			i--;
		}
		
	}
	long long a1[MAXN];
	char ch1[MAXN];
	for (long long i = 1; i <= n; i++) {
		a1[i] = a[n - i + 1];
		ch1[i] = ch[n - i + 1];
	}
	for (long long i = 1; i <= n; i++) {
		if (ch[i] == ch1[i]) {
			ans += abs(a[i] - a1[i]);
		} else {
			ans += max(a[i], a1[i]);
		}
	}
	cout << ans / 2;
	return 0;
}