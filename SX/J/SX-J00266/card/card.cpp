#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	long long w[a + 10], n[b + 10], m[b + 10];
	for (int i = 0; i < a; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < a; i++) {
		if (i == 0 ) {
			for (int j = 0; j < a; j++) {
				n[w[j]]++;
			}
			for (int j = 1; j <= b; j++) {
				if (n[j] != 0) {
					m[j]++;
				}
			}
			for (int j = 0; j <= b; j++) {
				n[j] = 0;
			}
		} else {
			for (int j = i - 1; j < a; j++) {
				n[w[j]]++;
			}
			for (int j = 1; j <= b; j++) {
				if (n[j] != 0) {
					m[j]++;
				}
			}
			for (int j = 0; j <= b; j++) {
				n[j] = 0;
			}
		}
	}
	for (int j = 1; j <= b; j++) {
		cout << m[j] << ' ';
	}
	return 0;
}
