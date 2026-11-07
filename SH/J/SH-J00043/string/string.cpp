#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair <int, int>;
using veci = vector <int>;
using vecll = vector <long long>;

//void solve();

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n; cin >> n;
	vector <pair <ll, char>> A(n);
	for (int i = 0; i < n; i ++) cin >> A[i].first >> A[i].second;

	ll ans = 0;
	for (int i = 0, j = n - 1; i < j; ){
		auto &p1 = A[i], &p2 = A[j];
		if (p1.first == 0){ i ++; continue; }
		if (p2.first == 0){ j --; continue; }

		// cout << p1.first << ' ' << p1.second << " [] " << p2.first << ' ' << p2.second << '\n';

		ll x = min(p1.first, p2.first);
		ans += (p1.second != p2.second) * x;
		p1.first -= x, p2.first -= x;
	}
	cout << ans << '\n';
	
	return 0;
}
