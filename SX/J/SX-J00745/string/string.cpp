#include <bits/stdc++.h>
using namespace std;
string s, s1, s2, s3, c;
long long n, a, k;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> s;
		while (a--) {
			s1 += s;
			c += s;
		}
	}
	for (int i = s1.size() - 1; i >= 0; i--) {
		s2 += s1[i];
	}
	long long l = s1.size();
	if (s2 == s1)
		cout << 0;
	else {
		for (int i = 0; i < l; i++) {
			c[l - l / 2 + i ] = c[i];
		}
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] != c[i])
				k++;
		}
		cout << k;

	}
	return 0;
}
