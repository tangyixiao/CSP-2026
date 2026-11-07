#include <bits/stdc++.h>
using namespace std;
long long n, a, f, m;
string c, s, x, s1, s2;
long long minx = LLONG_MAX, maxx = LLONG_MAX;

int js(string w) {
	long long k;
	long long len = w.size();
	for (int i = 0; i <= len - 1; i++) {
		if (w[i] == w[w.size() - 1 - i])
			k++;
	}
	if (maxx <= k)
		maxx = k;
	return maxx;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a;
		x += a;
		cin >> c;
		for (int i = 1; i <= a; i++)
			s += c;
	}
	s2 = s;
	for (int i = 0; i <= s.size() - 1; i++) {
		if (s[i] != s[s.size() - 1 - i])
			f = 1;
	}
	if (f == 0) {
		cout << 0;
		return 0;
	} else {
		for (int i = 0; i <= s.size() - 1; i++) {
			s1 = s;
			for (int j = 0; j <= x.size() - 1; j++) {
				s1[i] = x[j];
				if (js(s1))
					s[i] = x[i];
			}
		}
	}
	for (int i = 0; i <= s.size() - 1; i++) {
		if (s[i] != s2[i])
			m++;
	}
	cout << m;
	return 0;
}
