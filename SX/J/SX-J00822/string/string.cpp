#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll n, ans, ans1, ans2, len;
bool isa = true, isb = true;
string s, s1;

struct Node {
	ll shuliang;
	char zimu;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		cin >> a[i].shuliang >> a[i].zimu;
		if (a[i].zimu != a[i - 1].zimu && i != 1)
			isa = false;
		if (a[i].shuliang != a[i - 1].shuliang && i != 1)
			isb = false;
	}
	if (isa == true) {
		printf("%d", 0);
		return 0;
	}
	if (isb == true) {
		for (int i = 1; i <= n; i++) {
			s += a[i].zimu;
		}
		s1 = s;
		reverse(s1.begin(), s1.end());
		if (s1 == s) {
			printf("%d", 0);
			return 0;
		}
		for (int i = 0; i <= (n / 2) - 1; i++) {
			if (s[i] != s1[i])
				ans++;
		}
		printf("%lld", ans *a[1].shuliang);
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i].shuliang; j++) {
			s += a[i].zimu;
		}
	}
	s1 = s;
	reverse(s1.begin(), s1.end());
	if (s1 == s) {
		printf("%d", 0);
		return 0;
	}
	len = s.size();
	for (int i = 0; i <= len / 2 - 1; i++) {
		if (s[i] != s1[i]) {
			ans1++;
		}
	}
	for (int i = (len + 1) / len; i <= len; i++) {
		if (s[i] != s1[i]) {
			ans2++;
		}
	}
	ans = min(ans1, ans2);
	printf("%lld", ans);
	return 0;
}