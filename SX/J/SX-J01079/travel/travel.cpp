#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string rcx, rzw, xzw, xcx;
	cin >> rcx >> rzw >> xcx >> xzw;
	if (rcx == xcx) {
		cout << 1;
		if (rzw[0] == xzw[0] && rzw[1] == xzw[1]) {
			cout << 1;
			if (((rzw[2] == 'A' || rzw[2] == 'B' || rzw[2] == 'C') && (xzw[2] == 'A' || xzw[2] == 'B' || xzw[2] == 'C'))
			        || ((rzw[2] == 'D' || rzw[2] == 'E') && (xzw[2] == 'D' || xzw[2] == 'F'))) {
				cout << 1;
				if ((rzw[2] == 'A' && xzw[2] == 'B') || (rzw[2] == 'B' && xzw[2] == 'A') || (rzw[2] == 'B' && xzw[2] == 'C')
				        || (rzw[2] == 'C' && xzw[2] == 'B') || (rzw[2] == 'D' && xzw[2] == 'F') || (rzw[2] == 'F' && xzw[2] == 'D'))
					cout << 1;
				else
					cout << 0;
			}

			else
				cout << 0 << 0;
		}

		else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}