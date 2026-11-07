#include <bits/stdc++.h>
using namespace std;

const int N = 500005;
int a[N];
int b[N];
int c[N];
int ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		ans[i] = n;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			b[a[j]]++;
			if(b[a[j]] == 2) {
				ans[a[j]]--;
			}
		}
		for (int k = 1; k <= i; k++) {
			ans[a[k]]--;
		}
	}
	ans[0]--;
	for (int i = 0; i < m - 1; i++) {
		cout << ans[i] << ' ';
	}
	cout << n;
	return 0;
}
