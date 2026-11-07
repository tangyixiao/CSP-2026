#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+5;
ll n, ii = 1, jj = 1, ans, sum;
string s;

struct hui {
	ll num;
	char c;
} a[N];

int main() {//LEVEL UP!
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i].num >> a[i].c;
		sum += a[i].num;
	}
	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= a[i].num; j++)
			s += a[i].c;
	ll mid =  sum / 2;
	ll i = 1, j = n;
	for (ll i = 0, j = s.size() - 1; i <= sum / 2; i++, j--)
		if (s[i] != s[j])
			ans++;
	cout << ans;
	return 0;
}
