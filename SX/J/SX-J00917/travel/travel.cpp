#include <bits/stdc++.h>
using namespace std;
string a1, a2, b1, b2, summ;

int main() {
//第一题旅游
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2) {
		summ += '1';
		if (b1[1] == b2[1]) {
			summ += '1';
			if ((b1[2] <= 'C' && b2[2] <= 'C') || ((b1[2] == 'F' || b1[2] == 'D') && (b2[2] == 'F' || b2[2] == 'D'))) {
				summ += '1';
				if ((b1[2] == 'A' && b2[2] == 'B') || (b1[2] == 'B' && b2[2] == 'A') || (b1[2] == 'B' && b2[2] == 'C') || (b1[2] == 'C'
				        && b2[2] == 'B') || (b1[2] == 'D' && b2[2] == 'F') || (b1[2] == 'F' && b2[2] == 'D')) {
					summ += '1';
				} else {
					summ += '0';
				}
			} else {
				summ += '0';
				summ += '0';
			}
		} else {
			summ += '0';
			summ += '0';
			summ += '0';
		}
	} else {
		summ += '0';
		summ += '0';
		summ += '0';
		summ += '0';
	}
	cout << summ;
	return 0;
}
