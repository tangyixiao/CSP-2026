#include <bits/stdc++.h>
using namespace std;
int a,b,pai1,pai2;
char lie1,lie2;
int zhuan(char x) {
	if (x == 'A') {
		return 1;
	}
	if (x == 'B') {
		return 2;
	}
	if (x == 'C') {
		return 3;
	}
	if (x == 'D') {
		return 5;
	}
	return 6;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> pai1 >> lie1;
	cin >> b >> pai2 >> lie2;
	if (a == b) {
		cout << 1;
		if (pai1 == pai2) {
			cout << 1;
			bool l1 = lie1 <= 'C';
			bool l2 = lie2 <= 'C';
			if (l1 == l2) {
				cout << 1;
				if (abs(zhuan(lie1)-zhuan(lie2))==1) {
					cout << 1; 
				}else{
					cout << 0;
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
