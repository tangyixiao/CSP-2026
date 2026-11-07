#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(!(c1 == c2)) {
		cout << "0000" << endl;
		return 0;
	}
	cout << 1;
	if((!(s1[0] == s2[0])) || (!(s1[1] == s2[1]))) {
		cout << "000" << endl;
		return 0;
	}
	cout << 1;
	int x1 = s1[2] - 'A', x2 = s2[2] - 'A';
	bool f1 = (x1 <= 2), f2 = (x2 <= 2);
	if(!(f1 == f2)) {
		cout << "00" << endl;
		return 0;
	}
	cout << 1;
	if(f1 == 1) {
		if(((x1 - x2) == 1) || ((x2 - x1) == 1)) {
			cout << 1 << endl;
		}else {
			cout << 0 << endl;
		}
	}else {
		cout << 1 << endl;
	}
	return 0;
}

