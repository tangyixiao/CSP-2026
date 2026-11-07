#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], num[300005], last[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	for (long long i = n; i >= 1; i--)
		last[a[i]] = max(i, last[a[i]]);
	for (long long i = 1; i <= n; i++) {
		long long j = i;
		while (j <= n) {
			num[a[j]]++;
			j = last[a[j]];
			j++;
		}
	}
	for (long long i = 1; i <= m; i++) {
		cout << num[i] << ' ';
	}
	return 0;
}
