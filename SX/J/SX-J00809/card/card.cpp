#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
typedef long long ll;
ll n, m;
ll a[N];
set<ll> s;
set<ll>::iterator it;
ll ans[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	bool isA = true;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		if (a[i] < a[i - 1])
			isA = false;
	}
	if (isA) {
		for (int i = 1; i <= n; i++) {
			s.clear();
			for (int j = i; j <= n; j++) {
				s.insert(a[i]);
			}
			for (it = s.begin(); it != s.end(); it++) {
				ans[*it]++;
			}
		}
		for (int i = 1; i <= m; i++) {
			printf("%lld ", ans[i]);
		}

	} else {
		cout << 1 << " ";
	}
	return 0;
}

