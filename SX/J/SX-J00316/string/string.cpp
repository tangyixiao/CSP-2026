#include <bits/stdc++.h>

using namespace std;

long long n, a, sum, len, r, l, rr, ll;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c, len += a;
		for (int j = 1; j <= a; j++)
			s += c;
	}
	int u = s.size();
	for (int i = 0; i < u / 2; i++) {
		if (s[i] != s[s.size() - 1 - i])
			sum++;
	}
	cout << sum;
	return 0;
}
