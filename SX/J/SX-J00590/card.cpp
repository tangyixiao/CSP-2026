#include <bits/stdc++.h>
using namespace std;
long long k[3000010];
long long a[3000010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	string s;
	cin >> n >> m;
	for (long long nn = 1; nn <= n; nn++) {
		cin >> a[nn];
	}
	for (long long nnn = 1; nnn <= n; nnn++) {
		s = "";
		for (long long nn = nnn; nn <= n; nn++) {
			s = s + char(a[nn]);
			if (s.find(char(a[nn])) != s.size() - 1) {
				s.erase(s.find(char(a[nn])), s.size() - 1 - s.find(char(a[nn])));
			}
		}
		for (long long w = 0; w <= s.size() - 1; w++) {
			k[s[w]]++;
		}
	}
	for (long long nn = 1; nn <= m; nn++) {

		cout << k[nn] << " ";
	}
	return 0;
}