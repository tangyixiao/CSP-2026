#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[1000009], b[1000009];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int l = 1; l <= n; l++) {
		string str = "";
		for (int j = l; j <= n; j++) {
			str += char(a[j]);
		}
		for (int i = 1; i <= m; i++) {
			if (str.find(char(a[i ])) != 0) {
				b[i]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
