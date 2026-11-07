#include <bits/stdc++.h>
using namespace std;
int a[5];
int i = 0;
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a[i] = 1;
		i++;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			a[i] = 1;
			i++;
			if (s2[2] >= 'A' && s2[2] <= 'C' && s1[2] >= 'A' && s1[2] <= 'C' || s2[2] >= 'D' && s2[2] <= 'F' && s1[2] >= 'D' && s1[2] <= 'F') {
				a[i] = 1;
				i++;
				if (abs(int(s1[2]) - int(s2[2])) == 1) {
					a[i] = 1;
					i++;
				}
			}
		}
	}
	for (int j = 0; j <= 3; j++) {
		cout << a[j];
	}
	return 0;
}
