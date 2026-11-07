#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005], sum[100005], ans[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			sum[j] = a[j];
			if (a[j + 1] == sum[j]) {
				a[j] == 0;
			}
		}
	}
	return 0;
}
