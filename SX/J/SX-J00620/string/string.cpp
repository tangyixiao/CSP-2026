#include <bits/stdc++.h>
using namespace std;
string a[50];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, b, c, d, h;
	string e, f;
	cin >> n >> b >> e;
	for (int i = 0; i < b; i++) {
		a[i] = e;
	}
	cin >> c >> f;
	for (int i = b; i < c + b; i++) {
		a[i] = f;
	}
	int g = (c + b) / 2;
	for (int i = 0; i < g; i++) {
		if (a[i] != a[i + g]) {
			h += 1;
		}
	}
	cout << h;

	return 0;
}