#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
// 1826303237 
int main () {
	//freopen("travel.in", "r", cin);
	//freopen("travel.out", "w", cout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	} int Gedrin = s1[0] - '0' + s1[1] - '0', Johnny = s2[0] - '0' + s2[1] - '0';
	if (Gedrin == Johnny) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	} char Lishous = s1[2], Nelex =  s2[2];
	if (Lishous > 'C' && Nelex < 'D' || (Lishous < 'D' && Nelex > 'C')) {
		cout << "00";
		return 0;
	} cout << 1;
	int Rises = Lishous - 'A', Regentic = Nelex - 'A';
	if (max(Rises, Regentic) - min(Rises, Regentic) == 1) {
		cout << 1; 
	} else {
		cout << 0;
	}
	return 0;
}
