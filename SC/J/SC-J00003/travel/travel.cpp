#include<bits/stdc++.h>
using namespace std;

int check[2] = {1,-1};

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int flag1 = 1,flag2 = 1;
	
	if (c1 == c2)
		cout << '1' ;
	else {
		cout << "0000" ;
		return 0 ;
	}
	
	if (s1[0] == s2[0]) {
		if (s1[1] == s2[1])
			cout << '1' ;
		else {
			cout << "000" ;
			return 0 ;
		}
	}
	else {
		cout << "000" ;
		return 0 ;
	}
	
	if ((int)s1[2] >= 65 && (int)s1[2] <= 67)
		flag1 = 0 ;
	if ((int)s2[2] >= 65 && (int)s2[2] <= 67)
		flag2 = 0 ;	
	
	if (flag1 == flag2) {
		cout << '1' ;
		for (int i = 0;i <= 1;i++) {
			if (s1[2] + check[i] == (int)s2[2]) {
				cout << '1' ;
				return 0 ;
			}
		}
		cout << '0' ;
	}
	else
		cout << "00" ;
	
	return 0 ;
}