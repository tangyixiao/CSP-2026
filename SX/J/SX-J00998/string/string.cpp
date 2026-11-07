#include <bits/stdc++.h>
using namespace std;
string v;
int x;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int z, s = 1;
	cin >> z;
	for (int i = 1; i <= z; i++) {
		int x;
		char c;
		cin >> x >> c;
		for (int j = s; j <= x; j++) {
			v[j] = c;
		}
		s += x;
	}
	bool bz = 1;
	int len = v.size(), j = len;
	for (int i = 1; i <= len / 2; i++) {
		if (v[i] != v[j]) {
			bz = 0;
		}
		j--;
	}
	if (bz == 1) {
		cout << 0;
		return 0;
	}
	int b = 0;
	for (int i = 1; i <= len; i++) {
		if (v[i] != v[j]) {
			b++;
			v[j] = v[i];
		}
	}
	cout << b;
	return 0;
}