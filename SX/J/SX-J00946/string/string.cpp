#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, x = 0;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			s = s + c[i];
		}
	}
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[n - i])
			x++;
	}
	cout << x;
}
