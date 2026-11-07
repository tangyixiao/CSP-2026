#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[1000005], yusum, mmax, yumax, dmax;

void dfs(ll step, ll num) {
	if (step >= m) {
		dmax = max(dmax, num);
	}
	dfs(step++, num &a[step]);
	dfs(step++, num);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	cin >> a[1];
	yusum = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		yusum &= a[i];
		mmax = max(mmax, a[i]);
	}
	if (m == 1) {
		cout << mmax;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j)
					yumax = max(yumax, a[i] & a[j]);
			}
		}
		cout << yumax;
	} else if (m == n) {
		cout << yusum;
	} else if (m == n - 1) {
		int yuu = 0;
		for (int i = 1; i <= n; i++) {
			int yyu = a[1];
			for (int j = 1; j <= n; j++) {
				if (j != i) {
					yyu &= a[j];
				}
			}
			yuu = max(yyu, yuu);
		}
		cout << yuu;
	} else {
		cout << 0;
	}
	return 0;
}
