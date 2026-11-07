#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;
int n, m, a[500000], b[500000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[j] == i) {
				if (b[i] == 0)
					b[i] = j;
				else if (b[i] < 0) {
					b[i] = j + b[i];
				} else {
					for (int k = b[i] - 1; k < j; k++)
						b[k]--;
					b[i] = j;
				}
			}
		}
		cout << b[i] << ' ';
	}
	return 0;
}
