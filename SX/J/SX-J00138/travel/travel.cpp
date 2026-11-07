#include <bits/stdc++.h>
using namespace std;
int ra, xa;
char r[5], x[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ra;
	cin >> r[1] >> r[2] >> r[3];
	cin >> xa;
	cin >> x[1] >> x[2] >> x[3];
	if (ra == xa) { //tongchexiang
		cout << "1";
		if (r[1] != x[1] || r[2] != x[2])
			cout << "000"; //tongpai
		else {
			cout << "1";
			if ((r[3] == 'A' && (x[3] != 'B' && x[3] != 'C')) || (r[3] == 'B' && (x[3] != 'A' && x[3] != 'C')) || (r[3] == 'C'
			        && (x[3] != 'B' && x[3] != 'A')) || (r[3] == 'D' && x[3] == 'F') || (r[3] == 'D' && x[3] == 'F')) //tongche
				cout << "00" ;
			else {
				cout << "1";
				if ((r[3] == 'D' && x[3] == 'F') || (r[3] == 'D' && x[3] == 'F') || (r[3] == 'A' && x[3] == 'B') || (r[3] == 'B'
				        && x[3] == 'A')//ling
				        || (r[3] == 'B' && x[3] == 'C') || (r[3] == 'B' && x[3] == 'C'))
					cout << "1";
				else
					cout << "0";
			}

		}
	} else
		cout << 0000;
	return 0;
}
