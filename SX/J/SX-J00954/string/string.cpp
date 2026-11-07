#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

struct A {
	long long a;
	long long b;
} s[N];
char x;

int main() {
	long long n, tot, sum, ans = 0;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> x;
		s[i].b = x - 'a';
	}
	tot = n;
	for (int i = 1; i < tot; i++) {
		sum = s[i].a;
		while (sum > 0) {
			if (sum <= s[tot].a) {
				if (s[tot].b != s[i].b) {
					ans = ans + sum;
				}
				s[tot].a = s[tot].a - sum;
				if (s[tot].a == 0) {
					tot--;
				}
				break;
			}
			if (s[tot].b != s[i].b) {
				ans = ans + s[tot].a;
			}
			sum = sum - s[tot].a;
			tot--;
		}
	}
	cout << ans;
	return 0;
}
