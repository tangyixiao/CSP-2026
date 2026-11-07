#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int cnt[m+1] = {0};
	for (int i=1; i<=n; i++) {
		int pre[m+1] = {0};
		for (int j=i-1; j<n; j++) {
			if (pre[a[j]]) {
				for (int k=pre[a[j]]-1; k<j; k++) {
					pre[a[k]] = 0;
				}
			}
			pre[a[j]] = j+1;
		}
		for (int p=1; p<=m; p++) {
			if (pre[p]) {
				cnt[p]++;
			}
		}
	}
	for (int i=1; i<=m; i++) {
		cout << cnt[i] << " ";
	}
	cout << '\n';
	return 0;
}
