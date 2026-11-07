#include <bits/stdc++.h>
using namespace std;
string s1, s2;
long long c1, c2;
bool flag[10];

bool check(char a, char b) {
	if (((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C') ) || ((a == 'D' || a == 'F') && (b == 'D'
	        || b == 'F'))) {
		return 1;
	}
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	long long a = (s1[0] - '0') * 10 + s1[1] - '0';
	long long b = (s2[0] - '0') * 10 + s2[1] - '0';
	char c = s1[2];
	char d = s2[2];
	if (c1 == c2) {
		flag[1] = 1;
		if (a == b) {
			flag[2] = 1;
			if (check(c, d)) {
				flag[3] = 1;
				int e = abs(c - d);
				if (((a == 'D' || a == 'F') && (b == 'D' || b == 'F') ) || e == 1) {
					flag[4] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		cout << flag[i];
	}
	return 0;
}