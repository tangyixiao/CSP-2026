#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, c[600005], t[600005], m[600005];
string s, l, n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string  .out", "w", stdout);

	cin >> a >> b;
	for (ll i = 1; i <= a; i++)
		cin >> c[i];

	for (ll i = a; i >= 1 ; i--) {
		t[600005] = 0;

		for (ll j = 1; j <= i; j++) {
			t[c[j]]++;
			if ( t[c[j]] == 2)
				for (ll k = 1; k < j; k++)
					c[k] = 0;
			m[c[j]]++;
		}


	}
	for (ll i = 1; i <= b; i++)
		cout << m[i] << " ";
	return 0;
}
