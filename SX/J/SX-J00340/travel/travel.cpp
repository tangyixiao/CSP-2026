#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int s11, s22;
char s1p, s2p;
int num;

int main() {
	freopen("travel.in", "r", "stdin");
	freopen("travel.out", "w", "stdout");
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	int len = s1.size();
	for (int i = 1; i <= len; i++) {

	}
	if (s11 == s22)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((s1p == 'A' && s2p == 'B') || (s1p == 'B' && s2p == 'A') || (s1p == 'B' && s2p == 'C') || (s1p == 'C'
	        && s2p == 'B') || (s1p == 'D' && s2p == 'F') || (s1p == 'F' && s2p == 'D') || (s1p == 'A' && s2p == 'C') || (s1p == 'C'
	                && s2p == 'A'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if ((s1p == 'A' && s2p == 'B') || (s1p == 'B' && s2p == 'A') || (s1p == 'B' && s2p == 'C') || (s1p == 'C'
	        && s2p == 'B') || (s1p == 'D' && s2p == 'F') || (s1p == 'F' && s2p == 'D'))
		cout << 1;
	else
		cout << 0;
	return 0;
}