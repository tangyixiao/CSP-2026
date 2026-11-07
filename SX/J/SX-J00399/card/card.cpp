#include <bits/stdc++.h>
using namespace std;
int n, m, k[500005], a[500005], maxx = 0;

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(a[i], maxx);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j <= maxx; j++) {
			k[j]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << k[i] << " ";
	}
	return 0;
}