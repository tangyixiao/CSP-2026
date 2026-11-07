#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+10;
ll n, m;
ll a[N];
string s, s1;
map<int, int> mp;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (s.find(a[j]) == false) {
				s += a[j] + '0';
			} else {
				ll cnt = s.find(a[j]);
				for (int k = 0; k < cnt; k++) {
					s1 += s[k];
				}
				s1 += a[j] + '0';
				s = s1;
			}
		}
		ll len = s.size();
		for (int j = 0; j < len; j++) {
			mp[s[j] - '0']++;
		}
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++) {
		cout << mp[a[i]] << ' ';
	}
	return 0;
}