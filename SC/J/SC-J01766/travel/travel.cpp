#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1, s1, c2, s2;
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 != c2) {	// 车厢不符
		cout << "0000" << endl;
		return 0;
	} else {
		cout << '1';
		if(s1[0] != s2[0] || s1[1] != s2[1]) {	// 排不同
			cout << "000" << endl;
			return 0;
		} else {
			cout << '1';
			if((s1[2] < 'D' && s2[2] >= 'D') ||
				(s1[2] >= 'D' && s2[2] < 'D')) {	// 不在同侧
				cout << "00" << endl;
				return 0;
			} else {
				cout << '1';
				int a = s1[2] - 'A', b = s2[2] - 'A';
				if(abs(a - b) == 1) {
					cout << '1' << endl;
					return 0;
				} else {
					cout << '0' << endl;
					return 0;
				}
			}
		}
	}
	
	return 0;
}