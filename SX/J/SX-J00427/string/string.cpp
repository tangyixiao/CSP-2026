#include <bits/stdc++.h>
using namespace std;
long long a, s, z, x;
string f;
char d;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> s >> d;
		for (int j = 1; j <= s; j++) {
			z ++;
			f[z] = d;
		}
	}
	for (int i = 1; i <= z; i++) {
		if (i >= z + 1 - i) {
			break;
		} else {
			if (f[i] != f[z + 1 - i]) {
				//cout << f[i] << ' ' << f[j] << ' ';
				x++;
			}
		}
	}
	cout << x;
	return 0;
}