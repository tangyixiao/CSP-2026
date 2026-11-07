#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll len, len1;
ll x;
char b;
string s;

bool ish(string s1) {
	len1 = s1.size();
	if (len1 % 2 == 0) {
		for (int i = 0; i <= len1 / 2 - 1; i++) {
			if (!(s1[i] == s1[len1 - i])) {
				return false;
			}
		}
		return true;
	} else {
		for (int i = 0; i <= len1 / 2 - 1; i++) {
			if (!(s1[i] == s1[len1 - i])) {
				return false;
			}
		}
		return true;
	}
}

bool check(ll mid) {
	string s2 = s.substr((s.size() + 1) / 2);
	string s1 = s.substr(0, s.size() / 2);
	int p = s2.size() - 1;
	for (int i = 0; i <= p; i++) {
		if (mid == 0) {
			return ish(s1 + s2);
		}
		if (s1[i] != s2[i]) {
			mid--;
			s1[i] = s2[i];
		}
	}
	return true;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	char v = 'a';
	bool q = true;
	for (int i = 1; i <= n; i++) {
		scanf("%lld%s", &x, &b);
		if (v != b && i > 1) {
			q = false;
		}
		v = b;
		s.insert(s.end(), x, b);
	}
	if (q || ish(s)) {
		cout << 0;
		return 0;
	}
	int r = s.size(), l = 0;
	while (l <= r) {
		ll mid = l + r >> 1;
		if (check(mid))
			r = mid - 1;
		else
			l = mid + 1;
	}
	cout << l;
	return 0;
}