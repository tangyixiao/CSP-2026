#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll n, num[200005];
ll sum, r;
char a[200005];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> num[i] >> a[i];
		r += num[i];
		for (ll j = 1; j <= num[i]; j++) {
			s += a[i];
		}
	}
	for (ll i = 0; i < r / 2; i++) {
		int i2 = r - i - 1;
		if (s[i] != s[i2]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}