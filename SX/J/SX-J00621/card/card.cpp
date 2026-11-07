#include <bits/stdc++.h>
using namespace std;
int a, b, d[100005], c[100005], a1 = 0;
string n[100000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> d[i];
	}
	for (int i = 1; i <= a; i++) {
		for (int l = i; l <= a; l++) {
			for (int k = n[a1].size() - 1; k >= 0; k--) {
				if (n[a1][k] == d[l]) {
					a1++;
					for (int m = 1; m < k; m++) {
						n[a1][m] = n[a1 - 1][m];
					}
				}
			}
			n[a1] += d[l];
		}
		for (int k = 1; k <= n[a1].size(); k++) {
			c[k]++;
		}
	}
	for (int k = 0; k < b; k++) {
		cout << c[k] << " ";
	}
	return 0;
}