#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a, l, r, h;
char b;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a >> b;
		r += a;
		for (ll j = 1; j <= a; j++) {
			s += b;
		}
	}
	r = r - 1;
	for (ll i = 0; i <= s.size() - 1; i++) {
		l = i;
		if (l <= r) {
			if (s[l] != s[r]) {
				h++;
				r--;
			}
		}
	}
	cout << h;
}