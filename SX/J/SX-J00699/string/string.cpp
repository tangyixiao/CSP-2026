#include <bits/stdc++.h>
using namespace std;
string s, s1, s2;
char c;
long long n, a, sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		while (a--) {
			s += c;
		}
	}
	int l = s.size();
	int ll = l / 2;
	for (int i = 0; i < ll; i++) {
		s1[i] = s[i];
	}
	int f = 0;
	for (int i = l - 1; i > ll - 1; i--) {
		s2[f++] = s[i];
	}
	for (int i = 0; i < ll; i++) {
		if (s1[i] != s2[i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
