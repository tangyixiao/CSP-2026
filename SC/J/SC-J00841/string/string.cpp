#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 2e5+5, INF = 1e9;
ll n, a[N], b[N];
ll ans=0;
char opt;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> opt;
		b[i] = opt - 'a';
	}
	int l = 1, r = n;
	while (l < r) {
		if (b[l] == b[r]) {
			if (a[l] >= a[r]) {
				a[l] -= a[r];
				a[r] = 0;
				r--;
			} else {
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
		} else {
			if (a[l] >= a[r]) {
				a[l] -= a[r];
				ans += a[r];
				a[r] = 0;
				r--;
			} else {
				a[r] -= a[l];
				ans += a[l];
				a[l] = 0;
				l++;
			}
		}
	}
	cout << ans;
	return 0;
}