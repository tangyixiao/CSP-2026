#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct member {
	ll cnt;
	char word;
} a[2 * 100009];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	/*aabbc
	  cbbaa
	1.abbba
	2.cabac
	3.aabaa
	4.cbbbc
	aaabbb
	1.aaaaaa
	2.bbbbbb
	3.abaaba
	4.baaaab
	5.abbbba*/
	ll n;
	cin >> n;
	ll sum = 0;
	ll pos = 0;
	for (ll i = 1; i <= n; i++) {
		ll k;
		cin >> k;
		pos += k;
		if (i == 1)
			sum = k;
		else
			sum = __gcd(sum, k);
		char b;
		cin >> b;
		a[i].cnt = k;
		a[i].word = b;
	}
	string s = "";
	for (int i = 1; i <= n; i++) {
		a[i].cnt /= sum;
		for (int j = 1; j <= a[i].cnt; j++) {
			s += a[i].word;
		}
	}
	string s2 = s;
	reverse(s2.begin(), s2.end());
	ll ans = 0;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s2[i])
			ans++;
	}
	ll pos = ans * sum;
	cout << pos;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b*/
