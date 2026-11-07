#include <bits/stdc++.h>
using namespace std;
int a[100005];
int maxn[100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int cnt = 0, sum = a[n] ;
	for (int i = n; i >= 1; i--) {
		maxn[++cnt] = a[i];
	}
	for (int i = 2; i <= m; i++) {
		sum = sum &maxn[i];
	}
	cout << sum;
	return 0;
}