#include <bits/stdc++.h>
using namespace std;
char cs1[5], ss1[5], cs2[5], ss2[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> cs1 >> ss1 >> cs2 >> ss2;
	int c1 = (cs1[0] - '0') * 10 + (cs1[1] - '0');
	int s1r = (ss1[0] - '0') * 10 + (ss1[1] - '0');
	char s1p = ss1[2];
	int c2 = (cs2[0] - '0') * 10 + (cs2[1] - '0');
	int s2r = (ss2[0] - '0') * 10 + (ss2[1] - '0');
	char s2p = ss2[2];
	if (c1 != c2) puts("0000");
	else {
		if (s1r != s2r) puts("1000");
		else {
			if ((s1p <= 'C' && s2p <= 'C') || (s1p >= 'D' && s2p >= 'D')) {
				if (s1p > s2p) swap(s1p, s2p);
				if ((s1p == 'A' && s2p == 'B') || (s1p == 'B' && s2p == 'C') || (s1p == 'D' && s2p == 'F')) puts("1111");
				else puts("1110");
			} else puts("1100");
		}
	}
	fflush(stdout); fclose(stdin), fclose(stdout);
	return 0;
}