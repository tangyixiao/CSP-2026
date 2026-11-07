#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, ans, z1, z2;
int main() {
	freopen("travel1.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	z1 = z1 + s1[0] + s1[1];
	z2 = z2 + s2[0] + s2[1];
	if(c1 == c2) {
		if(z1 == z2) {
			if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) {
				if(int(abs(s1[2] - s2[2]))== 1 || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] =='F')) {
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
	}
	return 0;
}
