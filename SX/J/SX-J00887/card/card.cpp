#include <bits/stdc++.h>
using namespace std;
int n, m, a[10000000001], b[100000001];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {
			if (a[i] == a[j]) {
				b[i]++;
				a[j] = j + 100086;
			}
		}
	}
	for (int i = 0; i < m; i++)
		cout << b[i];
	return 0;
}
