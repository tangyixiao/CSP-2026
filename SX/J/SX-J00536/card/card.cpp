#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], s, b[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (long long i = 0; i < n; i++) {
		s = i;
		for (long long j = i + 1; j < n; j++) {
			for (long long k = i; k < j; k++) {
				if (a[j] == a[k]) {
					s = j;
				}
			}
		}
		for (long long j = s; j < n; j++) {
			b[a[j]]++;
		}
	}
	for (long long i = 1; i <= m; i++) {
		cout << b[i] << ' ';
	}
	return 0;
}