#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn = 2e5+5;
ll n;
ll a[maxn], sum[maxn];
char b[maxn];
vector<pair<ll, char> > A, B;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		sum[i] = sum[i-1]+a[i];
	}
	if (n == 1) {
		cout << 0 << '\n';
		return 0;
	}
	ll mid = (sum[n]+1)/2, id = 0;
	for (int i = 1; i <= n; i++) {
		if (sum[i] > mid) {
			id = i;
			break;
		}
	}
	for (int i = 1; i < id; i++) {
		A.push_back({a[i], b[i]});
	}
//	cout << id << ' ' << mid << '\n';
	if (sum[n] % 2 == 0) {
		if (mid-sum[id-1] > 0) {
			A.push_back({mid-sum[id-1], b[id]});
		}
		B.push_back({sum[id]-mid, b[id]});
	} else {
		if (mid-sum[id-1]-1 > 0) {
			A.push_back({mid-sum[id-1]-1, b[id]});
		}
		B.push_back({sum[id]-mid, b[id]});
	}
	for (int i = id+1; i <= n; i++) {
		B.push_back({a[i], b[i]});
	}
	reverse(A.begin(), A.end());
//	for (auto p : A) {
//		cout << p.first << p.second << ' ';
//	}
//	cout << '\n';
//	for (auto p : B) {
//		cout << p.first << p.second << ' ';
//	}
	ll pa = 0, pb = 0, na = 0, nb = 0, ans = 0;
	while (pa < A.size() || pb < B.size()) {
		if (na == nb) {
			na += A[pa].first;
			nb += B[pb].first;
			if (A[pa].second != B[pb].second) {
				ans += min(A[pa].first, B[pb].first);
			}
			pa++; pb++;
		} else if (na < nb) {
			ll oa = na;
			na += A[pa].first;
			if (A[pa].second != B[pb-1].second) {
				if (na > nb) {
					ans += llabs(oa - nb);
				} else {
					ans += llabs(oa - na);
				}
			}
			pa++;
		} else {
			ll ob = nb;
			nb += B[pb].first;
			if (A[pa-1].second != B[pb].second) {
				if (nb > na) {
					ans += llabs(ob - na);
				} else {
					ans += llabs(ob - nb);
				}
			}
			pb++;
		}
	}
	cout << ans << '\n';
	return 0; 
}
