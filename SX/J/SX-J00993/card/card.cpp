#include <bits/stdc++.h>
using namespace std;
long long a[500005];
long long b[50001];
long long c[300001];
long long tong[300001];

void huanyuan(int n) {
	for (int i = 1; i <= n; i++)
		tong[i] = 0;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	huanyuan(n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (tong[j] == 0) {
				tong[j] = 1;
				b[j] = a[j];
			}
		}
	}
	return 0;
}
