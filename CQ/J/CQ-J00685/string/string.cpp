#include<bits/stdc++.h>
#define ls (x << 1)
#define rs (x << 1 | 1)
#define PR pair<int, int>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N = 2e5 + 5;
const db EPS = 1e-6;
const int MOD = 998244353;
const ull P = 33550337;

ll n, a[N], ans;
char c[N];

int main() {
	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	
	int len = 0, l = 1, r = n;
	for (int i = 1; i < n; i++) {
		if (a[l] < a[r]) {
			if (c[l] != c[r]) ans += a[l];
			a[r] -= a[l];
			a[l] = 0;
			l++;
		} else {
			if (c[l] != c[r]) ans += a[r];
			a[l] -= a[r];
			a[r] = 0;
			r--;
		}
	}
	
	cout << ans;
	
	return 0;
}
