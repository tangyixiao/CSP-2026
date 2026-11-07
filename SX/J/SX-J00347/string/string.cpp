#include <bits/stdc++.h>
using namespace std;
long long n, a, sum = 0;
char c;
string s;
int x = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld%s", &a, &c);
		for (int j = 0; j < a; ++j) {
			s[x] = c;
			x++;
		}
	}
	for (int i = s.size() / 2; i >= 1 ; --i) {
		if (s[i] != s[s.size() + 1 - i]) {
			sum++;
		}
	}
	printf("%lld", sum);
	return 0;
}
