#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3 , c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1[0] == c3[0] and c1[1] == c3[1]) {
		cout << "1";
		if (c2[0] == c4[0] and c2[1] == c4[1]) {
			cout << "1";
			if (('A' <= c2[2] and c2[2] <= 'C' and 'A' <= c4[2] and c4[2] <= 'C') or ('D' <= c2[2] and c2[2] <= 'F' and 'D' <= c4[2] and c4[2] <= 'F')) {
				cout << "1";
				if ('D' <= c2[2] and c2[2] <= 'F' and 'D' <= c4[2] and c4[2] <= 'F')
					cout << "1";
				else if (c2[2] == 'B' or c4[2] == 'B')
					cout << "1";
				else cout << "0";
			}else {
				cout << "00";
			}
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;	
	
}
