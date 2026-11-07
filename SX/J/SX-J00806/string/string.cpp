#include <bits/stdc++.h>
using namespace std;
int  n;
const int N = 2e5+10;
long long ans, a, b;
string s, c;

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	b = s.size();
	for (int i = b / 2; i < b; i++) {
		if (b % 2 == 1) {
			if (s[i + 1] != s[b - i - 2])
				ans++;
		} else {
			if (s[i] != s[b - i - 1])
				ans++;
		}
	}
	printf("%lld", ans );
	return 0;
}