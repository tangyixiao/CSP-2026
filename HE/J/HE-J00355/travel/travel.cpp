#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << '1';
	} else cout << '0';
	char pai11 = s1[0], pai12 = s1[1];
	char pai21 = s2[0], pai22 = s2[1];
	if(c1 == c2) {
		if(pai11 == pai21 and pai12 == pai22) {
			cout << '1';
		} else cout << '0';
	} else {
		cout << '0';
	}
	char zuo1 = s1[2], zuo2 = s2[2];
	if(c1 == c2 and pai11 == pai21 and pai12 == pai22) {
		if((zuo1 == 'A' or zuo1 == 'B' or zuo1 == 'C') and (zuo2 == 'D' or zuo2 == 'F')) {
			cout << '0';
		} else if((zuo2 == 'A' or zuo2 == 'B' or zuo2 == 'C') and (zuo1 == 'D' or zuo1 == 'F')) {
			cout << '0';
		} else {
			cout << '1';
		}
	} else {
		cout << '0';
	}
	if(c1 == c2 and pai11 == pai21 and pai12 == pai22) {
		if(abs(zuo1-zuo2) == 1) {
			if((zuo1 == 'C' and zuo2 == 'D') or (zuo2 == 'C' and zuo1 == 'D')) {
				cout << '0';
				return 0;
			}
			cout << '1';
		} else {
			cout << '0';
		}
	} else {
		cout << '0';
	}
	
	return 0;
}
