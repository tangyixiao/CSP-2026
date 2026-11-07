#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005], d[300005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int s[300005] = {0};
		for (int j = i; j <= n; j++) {
			if (s[a[j]] == 0) {
				s[a[j]] = j;
			} else {
				int g = s[a[j]];
				for (int l = g; l < j; l++) {
					s[a[l]] = 0;
				}
				s[a[j]] = j;
			}
		}
		for (int j = i; j <= n; j++) {
			if (s[a[j]] != 0) {
				d[a[j]]++;
				s[a[j]] = 0;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << d[i] << " ";
	}
	return 0;
}