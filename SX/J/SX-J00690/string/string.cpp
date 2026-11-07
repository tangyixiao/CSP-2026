#include <bits/stdc++.h>
using namespace std;

int a[200010];
char e[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> e[i];
		for (int j = 1; j <= a[i]; j++) {
			s = s + e[i];
		}
	}
	long long len = s.size(), c = 0;
	for (long long i = 0; i <  len / 2 + 1; i++) {
		if (s[i] != s[len - i - 1])
			c++;
	}
	cout << c;
	return 0;
}