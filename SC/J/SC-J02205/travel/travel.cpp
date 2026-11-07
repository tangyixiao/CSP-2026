#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int flag = 0;
	string a1,a2, b1,b2;
	cin >> a1 >> b1 >> a2>>b2;
	if(a1 == a2) cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if(b1[0] == b2[0] && b1[1] == b2[1]) cout << 1;
	else cout << 0;
	if(b1[0] == b2[0] && b1[1] == b2[1]) {
		char s = 'C';
		if((b1[2] > s && b2[2] <= s) || (b2[2] > s && b1[2] <= s)) cout << 0;
		else {
			cout << 1;
			flag = 1;
		}
	} else cout << 0;
	if(flag == 1) {
		if(abs(b2[2] - b1[2]) == 1) cout << 1;
		else cout << 0;
	} else cout << 0;
	return 0;
}