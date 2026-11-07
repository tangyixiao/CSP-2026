#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll n, a[N];
char c[N];
string st = "";
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			st += c[i];
		}
	}
	ll ans = 0;
	for (ll i = 0; i < st.size(); i++) {
		int l = i, r = st.size() - i - 1;
		if (l == r)
			break;
		if (st[l] != st[r])
			ans++;
	}
	cout << ans;
	return 0;
}