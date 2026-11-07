#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	int c[a], d[a];
	for (int i = 0; i < a; i++) {
		cin >> c[i];
	}
	int a2[a][10005];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			a2[i][j] = c[i] % 2;
		}
	}
	for (int i = 0; i < a; i++) {
		if (c[i] == c[i + 1]) {
			d[i] = c[i];
			i++;
		} else {
			for (int j = 0; j < a; j++) {
				d[i] = a2[i][j] && a2[i + j][j];
			}
		}
	}
	for (int i = 1; i < a; i++) {
		if (d[i] < d[i - 1]) {
			int aa;
			aa = d[i];
			d[i] = d[i - 1];
			d[i - 1] = aa;
		}
	}
	cout << d[a - 1];
}