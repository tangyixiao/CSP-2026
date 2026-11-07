#include <bits/stdc++.h>
using namespace std;
int n, m, c, f, i;
int a[500000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	f = n;
	while (f != 0) {
		f--;
		cin >> a[i];
		i++;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				for (int k = i + 1; k <= j; k++) {
					a[k] = 0;
				}
			}
		}
	}
	for (i = 0; i < m; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] == m)
				s++;
		}
		cout << s << " ";
	}
	return 0;
}