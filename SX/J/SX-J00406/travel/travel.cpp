#include <bits/stdc++.h>
#define ll long long
using namespace std;
string w1, w2, x1, x2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x1 >> w1 >> x2 >> w2;
	if (x1[0] == x2[0] && x1[1] == x2[1]) {
		cout << "1";
		if (w1[0] == w2[0] && w1[1] == w2[1]) {
			cout << "1";
			if ((w1[2] >= 'A' && w1[2] <= 'C' && w2[2] >= 'A' && w2[2] <= 'C') || (w1[2] >= 'D' && w1[2] <= 'E' && w2[2] >= 'D'
			        && w2[2] <= 'E')) {
				cout << "1";
				if (w1[2] == 'A' && w2[2] == 'B')
					cout << "1";
				else if (w1[2] == 'B' && w2[2] == 'A')
					cout << "1";
				else if (w1[2] == 'B' && w2[2] == 'C')
					cout << "1";
				else if (w1[2] == 'C' && w2[2] == 'B')
					cout << "1";
				else if (w1[2] == 'D' && w2[2] == 'E')
					cout << "1";
				else if (w1[2] == 'E' && w2[2] == 'D')
					cout << "1";
				else {
					cout << "0";
				}
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}