#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
long long f;
int a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		for (int i = 0; i <= 1; i++) {
			if (s1[i] == s2[i])
				f = 1;
			else
				f = 0;
		}
		if (f == 0) {
			cout << 0;
			if (f == 1 || (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] >= 'C'))
				a = 1;
			if ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C'))
				a = 0;
			if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F')
				a = 1;
			if (a == 1)
				cout << 1;
			else
				cout << 0;
			if (a == 1 && s1[2] + 1 == s2[2] || a == 1 && s1[2] - 1 == s2[2])
				b = 1;
			if ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C'))
				b = 0;
			if (f == 0)
				b = 0;
			if (b == 1)
				cout << 1;
			else
				cout << 0;
		} else {
			cout << 1;
			if (f == 1 || s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] >= 'C')
				a = 1;
			if ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C'))
				a = 0;
			if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F')
				a = 1;
			if (a == 1)
				cout << 1;
			else
				cout << 0;
			if (a == 1 && s1[2] + 1 == s2[2] || a == 1 && s1[2] - 1 == s2[2])
				b = 1;
			if ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C'))
				b = 0;
			if (b == 1)
				cout << 1;
			else
				cout << 0;
		}
	} else
		cout << "0000";
	return 0;
}