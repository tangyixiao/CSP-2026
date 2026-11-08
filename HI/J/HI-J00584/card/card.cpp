#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n, m, a[500005], ans[300005], tmp[300005];
int main() {
    freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int t=n; t>=1; t--) {
		memset(tmp, 0, sizeof(tmp));
		for (int i=t; i<=n; i++) {
			int j=n;
			while(j>i) {
				if (a[i] == a[j]) {
					i = j;
					break;
				}
				--j;
			}
			ans[a[i]]++;
		}
	}
	for (int i=1; i<=m; i++) cout << ans[i] << ' ';
	return 0;
}

