#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e7+5;
ll n, l;
char s[N];

ll check(char x[N]) {
	ll ans;
	for (int i = 0; i < (l + 1) / 2; i++) {
		if (x[i] != x[l - i + 1])
			ans++;
	}
	return ans;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	while (n--) {
		ll a;
		char c;
		cin >> a >> c;
		ll f = l;
		l += a;
		for (int j = f + 1; j <= l; j++)
			s[j] = c;
	}
	cout << check(s);
	return 0;
}
