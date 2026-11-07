#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a, ans = 0, l, t, c = 0, m = 0;
char b;
string s1, s2, s3;
ll q[200005], o, p;
char w[200005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a;
		cin >> b;
		c = a;
		q[++o] = a;
		w[++p] = b;
		if (c == a) {
			m++;
		}
		s3 += b;
	}
	if (m == (n - 1)) {
		s1 = s3;
	} else {
		c = 1;
		for (ll i = 1; i <= n; i++) {
			for (ll j = 1; j <= q[i]; j++) {
				s1 += w[i];
			}
		}
	}
	l = s1.size();
	for (ll i = l - 1; i >= 0; i--) {
		s2 += s1[i];
	}
	for (ll i = 0; i <= l - 1; i++) {
		if (s1[i] == s2[i]) {
			ans++;
		}
	}
	t = (l - ans) / 2 * c;
	cout << t;
	return 0;
}