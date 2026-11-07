#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, cnt = 0;
	cin >> n >> m;
	int a[1000];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int k = a[i];
		for (int i = 1; i <= n; i++) {
			if (a[i] == k && a[i] != k) {
				cnt++;
			}
		}

	}
	cout << cnt;

	return 0;
}
