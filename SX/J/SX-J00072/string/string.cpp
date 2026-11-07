#include <bits/stdc++.h>
using namespace std;
int n, a, cnt;
string s, s1;
char b, t[2000005], t2[2000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> b;
		for (long long j = 1; j <= a; j++) {
			s += b;
		}
	}
	s1 = s;
	reverse(s.begin(), s.end());
	int len = s.length();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s1[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}