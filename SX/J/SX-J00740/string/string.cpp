#include <bits/stdc++.h>
using namespace std;
string a, b;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int k;
	cin >> k;
	int x = 0;
	for (int i = 0; i < k; i++) {
		int n;
		char m;
		cin >> n >> m;
		for (int j = 0; j <= n; j++) {
			a[x] = m;
			x++;
		}
	}
	int sum = 0;
	int j = 0;
	for (int i = a.size(); i >= 0; i--) {
		b[i] = a[j];
		j++;
	}
	for (int i = 0; i <= a.size(); i++) {
		if (a[i] != b[i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
