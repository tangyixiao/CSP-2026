#include <bits/stdc++.h>
using namespace std;
int c1, c2, a1, a2;
string b1, b2;
char d = 'A', e = 'B';

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> b1  >> a2 >>  b2 ;
	//char d = b1[3], e = b2[3];
	if (a1 == a2) {
		if (b1[0] == b2[0] && b1[1] == b2[1]) {

			if (b1[2] == 'D' || b1[2] ==  'D') {

				if (b2[2] == 'D' || b2[2] == 'E')
					cout << "1111";
				else
					cout << "1100";
			} else {
				if (b1[2] == 'B') {
					cout << "1111";
				} else {
					if (b2[2] != 'B')
						if (b2[2] == 'A' || b2[2] == 'C')
							cout << "1110";
						else
							cout << "1100";
					else
						cout << "1111";
				}
			}
		} else
			cout << "1000";
	} else
		cout << "0000";
	return 0;
}
