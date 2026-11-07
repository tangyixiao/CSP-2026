#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out","w", stdout);
	int l, b;
	long long a[200005] = {};
	cin >> l >> b;
	for (int i = 0; i < l; i++) {
		cin >> a[i];
	}
	long long temp;
	for (int i = 0; i < l - 1; i++) {
		if (a[i] > a[i + 1]) {
			temp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = temp;
		}
	}
	int an = 0;
	for (int i = 0; i < b; i++) {
		an = a[l - i] & a[l];
	}
	cout << an;
	return 0;
}