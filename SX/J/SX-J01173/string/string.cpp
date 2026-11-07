#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
char b[10005];
long long c[10005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	string a;
	long long u = 0;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		u += c[i];
		cin >> b[i];
	}
	long long w = 0;
	for (int i = 0; i < n; i++) {
		for (long long j = w; j < w + c[i]; j++) {
			a[j] = b[i];
		}
		w += c[i];
	}
	long long num = 0;
	for (long long i = 0; i < u / 2; i++) {
		if (a[i] != a[u - 1]) {
			num += 1;
		}
	}
	cout << num;
	return 0;
}