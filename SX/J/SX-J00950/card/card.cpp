#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
long long a[N];
long long b[N];
long long c[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 50) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++)
				b[j] = 0;
			for (int j = i; j <= n; j++) {
				if (b[a[j]]) {
					int l;
					for (int k = i; k <= j; k++) {
						if (a[k] == a[j]) {
							l = k;
							break;
						}
					}
					for (int k = l; k < j; k++) {
						b[a[k]]--;
					}
					b[a[j]]++;
				} else
					b[a[j]]++;
			}
			for (int j = 1; j <= m; j++) {
				if (b[j])
					c[j]++;
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << c[i] << " ";
		}
	} else {
		for (int i = 1; i <= n; i++) {
			b[a[i]]++;
		}
		long long t = b[a[1]];
		for (int i = 1; i <= m; i++) {
			if (!b[i]) {
				cout << "0 ";
			} else {
				if (i == a[1]) {
					cout << t << " ";
				} else {
					cout << t + b[i] << " ";
					t += b[i];
				}
			}
		}
	}
	return 0;
}