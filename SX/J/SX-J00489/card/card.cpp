#include <bits/stdc++.h>
using namespace std;
int n, m, i;
string a;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m ;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		for (int i = 1; i <= m; i++) {
			if (a[i] = a[i + 1]) {
				cout << a[i] + a[i + 1];
			} else {
				cout << i << " ";
			}
		}
	}
	return 0;
}
