#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int x1, x2;
	string b1, b2;
	cin >> x1 >> b1 >> x2 >> b2 ;
	if (x1 != x2 || x1 == 1 || x1 == 16 || x2 == 1 || x2 == 16)
		cout << "0000";
	else if ((b1[0] != b2[0] && b1[1] != b2[1]) || b1[1] != b2[1])
		cout << "1000";
	else {
		if (b1[2] == 'A' && b2[2] == 'B') {
			cout << "1111";
		}

		else if (b1[2] == 'B' && b2[2] == 'A') {
			cout << "1111";
		}

		else if (b1[2] == 'A' && b2[2] == 'C') {
			cout << "1110";
		}

		else if (b1[2] == 'C' && b2[2] == 'A') {
			cout << "1110";
		}

		else if (b1[2] == 'B' && b2[2] == 'C') {
			cout << "1111";
		}

		else if (b1[2] == 'C' && b2[2] == 'B') {
			cout << "1111";
		} else if (b1[2] == 'D' && b2[2] == 'F') {
			cout << "1111";
		} else {
			cout << "1100";
		}
	}


	return 0;
}
