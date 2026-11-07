#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2 * 1e5+9;

struct member {
	ll z;
	ll pop;
} a[N];
ll pre[N];


bool cmp(member a, member b) {
	return a.z > b.z;
}

bool cmpp(member a, member b) {
	if (a.pop == b.pop)
		return a.z > b.z;
	return a.pop > b.pop;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
	cin >> n >> m;
	ll mmax = 0;
	ll yu = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].z;
		mmax = max(mmax, a[i].z);
		yu &= a[i].z;
		ll is = a[i].z;
		ll pos = 0;
		while (is != 0) {
			if (is & 1)
				pos++;
			is >>= 1;
		}
		a[i].pop = pos;
	}
	if (m == 1) {
		cout << mmax;
		return 0;
	}
	if (m == n) {
		cout << yu;
		return 0;
	}
	sort(a + 1, a + n + 1, cmpp);
	ll ans = a[1].z;
	for (int i = 1; i <= m; i++) {
		ans &= a[i].z;
	}
	ll id = 0;
	for (int i = 1; i <= n; i++) {
		while (a[i].z > pre[id]) {
			pre[id + 1] = pre[id] + pow(2, id);
			id++;
		}
	}
	sort(a + 1, a + n + 1, cmp);
	ll pos = pre[id];
	ll ans2 = pos;
	for (int i = 1; i <= n; i++) {
		if (a[i].z <= pos && m > 0) {
			ans2 &= a[i].z;
			m--;
		}
		if (m == 0)
			break;
	}
	if (m > 0) {
		for (int i = 1; i <= m; i++) {
			ans2 &= a[i].z;
		}
	}
	cout << max(ans, ans2);
	//2^k
	/*4 100 5 101 6 110 7 111 8 1000 9 1001 10 1010 11 1011 12 1100 13 1101 14 1110 15 1111
	1 1
	11 3 1+2^1
	111 7 1+2^1+2^2
	1111 15 1+2^1+2^2+2^3
	*/
	return 0;
}
/*
4 2
3 2 9 9

*/
