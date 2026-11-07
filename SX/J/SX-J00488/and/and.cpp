#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int n, m;
long long a[N];
long long maxx = -99;
long long ans = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		ans = a[i];
		int s = m - 1;
		int f = i;
		while (s--) {
			f++;
			ans &= a[f];
		}
		maxx = max(maxx, ans);
	}
	cout << maxx;
	return 0;
}
