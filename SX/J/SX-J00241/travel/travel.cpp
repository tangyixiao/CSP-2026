#include <bits/stdc++.h>
using namespace std;
long long c1, c2;
long long s1, s2;
char s11, s22;
bool f1 = 0, f2 = 0, f3 = 0, f4 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> s11 >> c2 >> s2 >> s22;
	long long s111 = s11;
	long long s222 = s22;
	if (c1 != c2) {
		f1 = 0;
		f2 = 0;
		f3 = 0;
	} else {
		f1 = 1;
		if (s1 == s2) {
			f2 = 1;
		}
		if (s1 == s2 && (s11 == 'D' && s22 == 'F')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'C' && s22 == 'B')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'C' && s22 == 'A')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'B' && s22 == 'A')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'F' && s22 == 'D')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'B' && s22 == 'C')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'A' && s22 == 'C')) {
			f3 = 1;
		}
		if (s1 == s2 && (s11 == 'A' && s22 == 'B')) {
			f3 = 1;
		}
	}
	if (f2 == 1 && (abs(s111 - s222) == 1)) {
		f4 = 1;
	}
	if (f2 == 1 && (s11 == 'F' && s22 == 'D')) {
		f4 = 1;
	}
	if (f2 == 1 && (s11 == 'D' && s22 == 'F')) {
		f4 = 1;
	}
	if (f2 == 1 && (s11 == 'D' && s22 == 'C')) {
		f4 = 0;
	}
	if (f2 == 1 && (s11 == 'C' && s22 == 'D')) {
		f4 = 0;
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}
