#include <bits/stdc++.h>
using namespace std;
int n, a[200000], t;
char e[200000];
long long h;
string s;

int zdy(int c, int b) {
	int y, aa = c, bb = b;
	while (1)  {
		y = aa % bb;
		if (y == 0) {
			return bb;
			break;
		}
		aa /= bb;
		aa = bb;
		bb = y;
	}
	return aa;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> e[i];
	}
	t = a[0];
	for (int i = 1; i < n; i++) {
		t = zdy(t, a[i]);
	}
	for (int i = 0; i < n; i++) {
		a[i] /= t;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i]; j++) {
			s += e[i];
		}
	}
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - 1 - i]) {
			h++;

		}
	}
	cout << h*t;
	return 0;
}
