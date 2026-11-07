#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;

ll n, x, idx, ans;
char c;
pair<ll, char> a[N];

int main() {
	ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x >> c;
		if (a[idx].second != c) {
			idx++;
			a[idx].first += x, a[idx].second = c;
		} else a[idx].first += x;
	}
	
//	for (int i = 1; i <= idx; ++i) {
//		cout << a[i].first << " " << a[i].second << "\n";
//	}
	
	int L = 1, R = idx;
	while (L <= R) {
		if (a[L].second != a[R].second) {
			if (a[L].first > a[R].first) {
				ans += a[R].first;
				a[L].first -= a[R].first;
				R--;
			} else if (a[R].first > a[L].first) {
				ans += a[L].first;
				a[R].first -= a[L].first;
				L++;
			} else {
				ans += a[R].first;
				R--, L++;
			}
		} else {
			if (a[L].first > a[R].first) {
				a[L].first -= a[R].first;
				R--;
			} else if (a[R].first > a[L].first) {
				a[R].first -= a[L].first;
				L++;
			} else R--, L++;
		}
	}
	
	cout << ans;
	
	return 0;
}