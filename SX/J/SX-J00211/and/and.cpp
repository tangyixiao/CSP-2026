#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
ll n, a[N], m, ans, mmax;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++) {
		for (int j = i + 1; j <= m; j++) {
			ans = a[i] | a[j];
			mmax = max(mmax, ans);
		}
	}
	cout << mmax;
	return 0;
}
