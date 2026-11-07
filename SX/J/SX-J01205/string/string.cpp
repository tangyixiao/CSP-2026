#include <bits/stdc++.h>
using namespace std;
int n;
string s = "";
long long l;
long long cnt = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long a;
		char b;
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}
		l += a;
	}
	for (long long i = 0; i < l / 2; i++) {
		if (s[i] != s[l - 1 - i])
			cnt++;
	}
	cout << cnt;
	return 0;
}
