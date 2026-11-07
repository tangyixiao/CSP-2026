#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n;
long long cnt, ans;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		long long x;
		string y;
		scanf("%lld", &x);
		cin >> y;
		cnt += x;
		for (long long j = 1; j <= x; j++) {
			s += y;
		}
	}
	cnt--;
	for (long long i = 0; i <= cnt / 2 - 1; i++) {
		if (s[i] != s[cnt - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
