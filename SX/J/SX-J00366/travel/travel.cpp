#include <bits/stdc++.h>
using namespace std;
int c1, s1, n[100], a;
string c2, s2;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		a++;
		n[a] = 1;
		if (c2[0] == s2[0] && c2[1] == s2[1]) {
			a++;
			n[a] = 1;
			if ((c2[2] == 'A' && s2[2] == 'B') || (c2[2] == 'A' && s2[2] == 'C' ) || (c2[2] == 'B' && s2[2] == 'A') || (c2[2] == 'B'
			        && s2[2] == 'C' ) || (c2[2] == 'C' && s2[2] == 'B' ) || ( c2[2] == 'C' && s2[2] == 'A') || (c2[2] == 'D'
			                && s2[2] == 'F')
			        || (c2[2] == 'F' && s2[2] == 'D')) {
				a++;
				n[a] = 1;
				if (abs((c2[2] - '0') - (s2[2] - '0')) == 1) {
					a++;
					n[a] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		cout << n[i];
	}
	return 0;
}
