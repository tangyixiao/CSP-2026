#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5e5+5;
ll n, m, a[N], tong[N];
string s;

int main() {//LEVEL UP!
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			if (s.find((char)a[j])  < s.size() && s.find((char)a[j]) >= 0)
				s.erase(s.find((char)a[j]), s.size());
			s += (char)a[j];

		}
		for (ll j = 0; j < s.size(); j++)
			tong[(ll)s[j]]++;
		s = "";
	}
	for (ll i = 1; i <= m; i++)
		cout << tong[i] << " ";
	return 0;
}
