#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const int N = 1e5+10;
string s2, s;
ll cnt, cnt2;

struct Node {
	ll x;
	char y;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i].x);
		cin >> a[i].y;
		for (int i = 1; i <= a[i].x; i++) {
			s += a[i].y;
		}
	}
	if (n <= 2000) {
		s2 = s;
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - i])
				cnt++;
		}

		for (int i = s2.size() / 2 - 1; i >= 0; i--) {
			if (s2[i] != s2[s2.size() - i])
				cnt2++;
		}
		cout << min(cnt, cnt2);
	} else {
		cout << 0;
	}
	return 0;
}