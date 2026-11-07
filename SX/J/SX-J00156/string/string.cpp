#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
string str = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		ll a;
		char c;
		cin >> a >> c;
		for (ll i = 1; i <= a; i++) {
			str += c;
		}
	}
	ll l = str.size(), x = 0;
	for (ll i = 0; i <= l / 2 - 1; i++) {
		if (str[i] != str[l - i - 1])
			x++;
	}
	cout << x;
	return 0;
}
