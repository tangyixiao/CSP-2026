#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 != c3) {
		cout << "0000";
		return 0;
	}//1
	if ((c2[0] != c4[0] ) || (c2[1] != c4[1])) {
		cout << "1000" ;
		return 0;
	} //2
	if ((c2[2] >= 'A' && c2[2] <= 'C') && (c4[2] >= 'D' && c4[2] <= 'F')) {
		cout << "1100";
		return 0;
	}//3

	if (c2[2] + 1 == c4[2] || c2[2] - 1 == c4[2] || c4[2] + 1 == c2[2] || c4[2] - 1 == c2[2]) {
		cout << "1111";
		return 0;
	}
	if ((c2[2] == 'D' && c4[2] == 'F' ) || ( c2[2] == 'F' && c4[2] == 'D')) {
		cout << "1111";
		return 0;
	}
	cout << "1110";
	return 0;
}
