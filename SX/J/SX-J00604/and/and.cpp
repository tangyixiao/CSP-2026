#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, c[600005], t[600005], m[600005], p;
string s, l, n;

int main() {
	freopen("and  .in", "r", stdin);
	freopen("and  .out", "w", stdout);

	cin >> a >> b;
	for (ll i = 1; i <= a; i++) {

		cin >> c[i];
		p = max(c[i], p);

	}
	cout << p;
	return 0;
}
/*
4 3
1 2 1 3*/
