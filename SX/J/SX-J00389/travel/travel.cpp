#include <bits/stdc++.h>
using namespace std;
int m1, m2;
string n1, n2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> m1 ;
	cin >> n1 ;
	cin >> m2 ;
	cin >> n2 ;
	if (m1 == m2) {
		if (n1[0] == n2[0] and n1[1] == n2[1]) {
			if ((n1[2] == 'A' and (n2[2] == 'B' or n2[2] == 'C')) or (n1[2] == 'B' and (n2[2] == 'A' or n2[2] == 'C'))
			        or (n1[2] == 'C' and (n2[2] == 'B' or n2[2] == 'A')) or (n1[2] == 'D' and n2[2] == 'E') or (n1[2] == 'E'
			                and n2[2] == 'D')) {
				if ((n1[2] == 'A' and n2[2] == 'B') or (n1[2] == 'B' and (n2[2] == 'A' or n2[2] == 'C')) or (n1[2] == 'C'
				        and n2[2] == 'B' ) or (n1[2] == 'D' and n2[2] == 'E') or (n1[2] == 'E' and n2[2] == 'D')) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
