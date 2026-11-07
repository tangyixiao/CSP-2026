#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
bool f[10];
string num1, num2;
char h1, h;
int h2;

int main() {
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2 && (c1 != "01" && c1 != "16")) {
		f[1] = true;
	}
	if (f[1] == true) {
		for (int i = 0; i < 2; i++) {
			num1 += s1[i];
			num2 += s2[i];
		}
		if (num1 == num2) {
			f[2] = true;
			h1 = s1[2];
			h = s2[2];
			if (h1 <= 'C' && h <= 'C') {
				f[3] = true;
			} else if (h1 > 'C' && h > 'C') {
				f[3] = true;
			}
			if (f[3] == true) {
				h2 = h;
				if (h1 + 1 == h2 || h1 - 1 == h2) {
					f[4] = true;
				}
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		if (f[i] == true)
			cout << 1;
		else
			cout << 0;
	}
	return 0;
}