#include <bits/stdc++.h>
#define ll long long
#define lf double
#define sc scanf
#define pf printf
#define stdio ios::sync_with_stdio(0);
using namespace std;
char c1[1001], c2[1001], s1[1001], s2[1001];
string ans = "";

//const int N=;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	bool a1 = 1, a2 = 1, a3 = 1, a4 = 1;
	sc("%s %s %s %s", c1, s1, c2, s2);
//	pf("%s %s %s %s\n", c1, s1, c2, s2);
	for (int i = 0; i < 2; ++i) {
		if (c1[i] != c2[i]) {
			a1 = 0;
			break;
		}
	}
	for (int i = 0; i < 2; ++i) {
		if (s1[i] != s2[i]) {
			a2 = 0;
			break;
		}
	}
	if (!((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D'
	        && s2[2] <= 'F'))) {
		a3 = 0;
	}
	if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A'))
		a4 = 0;
//	pf("%d %d %d %d\n", a1, a2, a3, a4);
	if (!a1) {
		pf("0000");
	} else if (!a2) {
		pf("1000");
	} else if (!a3) {
		pf("1100");
	} else if (!a4) {
		pf("1110");
	} else {
		pf("1111");
	}
	return 0;
}