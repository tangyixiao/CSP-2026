#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, c[600005], t[600005], m[600005], p[600005];
string s, l, n;

int main() {
	freopen("card  .in", "r", stdin);
	freopen("card  .out", "w", stdout);

	cin >> a >> b;
	for (ll i = 1; i <= a; i++) {

		cin >> c[i];
		p[i] = c[i];

	}

	for (ll i = 1; i <= a  ; i++) {
		t[600005] = 0;

		for (ll j = 1 ; j <= i  ; j++) {
			++t[c[j]];
			p[i] = c[i];
			if ( t[c[j]] == 2)
				for (ll k = 1; k < j   ; k++)
					c[k] = 0;

			++m[c[j]];
		}


	}
	for (ll i = 1; i <= b; i++)
		cout << m[i] << " ";
	return 0;
}
/*
4 3
1 2 1 3*/
