#include <bits/stdc++.h>
using namespace std;
long long n, m;
int a[1000005];
int sum[1000000];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[a[i]]++;
	}
	long long ans = 0;
	for (int i = 1; i <= m; i++) {
		cout << sum[i] + ans << " ";
		ans += sum[i];
	}
	return 0;
}