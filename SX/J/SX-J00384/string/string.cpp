#include <bits/stdc++.h>
using namespace std;
long long n;
string s = "", m;
long long l = 0, g;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> g >> m;
		for (long long j = 1; j <= g; j++) {
			s += m;
		}
	}
	long long k = s.size();
	for (long long i = 0; i < k / 2; i++) {
		if (s[i] != s[k - i - 1])
			l++;
	}
	cout << l;
	return 0;
}