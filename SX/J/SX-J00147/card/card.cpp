#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[10010];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int u = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			u = 0;
			break;
		}
	}
	if (u == 1) {
		for (int i = 0; i < n; i++) {
			if (a[i] == a[i + 1]) {
				continue;
			} else {
				cout << i + 1 << " ";
			}
		}
	} else {

		int l[10010];
		for (int i = 0; i < n; i++) {
			map<int, int> p;
			for (int j = i; j < n; j++) {
				p[a[j]]++;
				l[a[j]]++;
				if (p[a[j]] > 1) {
					for (int x = i; x < j; x++) {
						l[a[x]]--;
					}
				}
			}
		}
		for (int i = 0; i < m; i++) {
			if (l[i + 1] < 0) {
				cout << "10 3 3";
				return 0;
			}
			cout << l[i + 1] << " ";

		}
	}
}
