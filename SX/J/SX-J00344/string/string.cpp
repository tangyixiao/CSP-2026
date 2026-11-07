#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char s[10000];
string d;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a[10000] = {};
	int n, sum = 0, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> s[i];
		num += a[i];
		for (int k = 0; k < a[i]; k++)
			d += s[i];
	}
	int ld = d.size();
	for (int i = 0; i < ld / 2; i++) {
		if (d[i] != d[num - i - 1]) {
			sum++;
		}

	}
	cout << sum;
	return 0;
}