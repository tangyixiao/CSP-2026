#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, sum;
string s1 = "", s2 = "";
ll tong[10000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		ll a;
		char s;
		cin >> a >> s;
		tong[s - 'a'] += a;
		for (ll i = 1; i <= a; i++) {
			s1 += s;
		}
	}
	for (ll i = s1.size() - 1; i >= 0; i--) {
		s2 += s1[i];
	}
	if (s2 == s1) {
		cout << 0;
		return 0;
	} else {
		ll b = s1.size();
		for (ll i = 0; i < b; i++) {
			char s3 = s1[i], s4 = s2[i];
			if (s1 == s2)
				break;
			if (tong[s3 - 'a'] >= tong[s4 - 'a'] && s1[i] != s2[i]) {
				s2[i] = s1[i];
				s1[b - i - 1] = s2[i];
				sum++;
			} else {
				s1[i] = s2[i];
				s2[b - i - 1] = s1[i];
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}