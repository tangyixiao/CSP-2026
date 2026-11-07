#include <bits/stdc++.h>
using namespace std;
string c1 , s1 , c2 , s2; 
int main () {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	}else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	char a = s1[0] , b = s1[1] , c = s2[0] , d = s2[1] , e = s1[2] , f = s2[2];
	if (a == c && b == d) {
		cout << 1;
	}else {
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if ((e == 'A' || e == 'B' || e == 'C') && (f == 'A' || f == 'B' || f == 'C') || (e == 'D' || e == 'F') && (f == 'D' || f == 'F')) {
		cout << 1;
	}else {
		cout << 0;
		cout << 0;
		return 0;
	}
	if (abs(e-f) == 1) {
		cout << 1;
	}else {
		cout << 0;
	}
	return 0;
}
