#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long n;
string s;
int m, a, ans;


int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int b = 0;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
		int b = 0;
		for (int j = 1 + b; j <= m + b; j++) {
			s[j] = a;
		}
		int  b += m;
	}
	for (int i = 1; i <= b; i++) {
		int mid = (1 + b) / 2;
		for (int j = 1; j < mid; j++) {
			if (s[j] != s[b - j + 1]) {
				ans++;
			}
		}
	}
	cout << ans;

	cout << "0";
	return 0;
}
