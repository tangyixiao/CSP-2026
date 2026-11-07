#include <bits/stdc++.h>
using namespace std;
string t1, t2;
int n1, n2;

int main() {
	freoen("travel.in","r",stdin);
	freoen("travel.out","w",stdout);
	cin >> n1 >> t1 >> n2 >> t2;
	if (n1 == n2) {
		if (t1[0] == t2[0] && t1[1] == t2[1]) {
			if (((t1[2] == 'A') && (t2[2] == 'C')) || ((t1[2] == 'C') && (t2[2] == 'A'))) {
				cout << "1110";

			} else {
				if (((t1[2] == 'A') && (t2[2] == 'B')) || ((t1[2] == 'B') && (t2[2] == 'A')) || ((t1[2] == 'C') && (t2[2] == 'B'))
				        || ((t1[2] == 'B') && (t2[2] == 'C')) || ((t1[2] == 'D') && (t2[2] == 'F')) || ((t1[2] == 'F') && (t2[2] == 'D'))) {
					cout << "1111";
				} else {
					cout << "1100";
				}
			}


		} else {
			cout << "1000";
		}

	} else {
		cout << "0000";
	}
	return 0;
}
