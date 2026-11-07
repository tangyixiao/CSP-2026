#include <bits/stdc++.h>
using namespace std;
long long n, m, a[50005], cnt[50005], t1[30005], t2[30005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			t1[j] = 0;
		for (int j = i; j <= n; j++) {
			if (t1[a[j]] == 0) {
				t1[a[j]] = 1;
				t2[a[j]] = j;
			} else {
				for (int s = t2[a[j]]; s < j; s++) {
					t1[a[s]] = 0;
				}
				t1[a[j]] = 1;
				t2[a[j]] = j;
			}
		}
		for (int j = 1; j <= m; j++) {
			cnt[j] += t1[j];
		}
	}
	for (int j = 1; j <= m; j++)
		cout << cnt[j] << " ";
}

