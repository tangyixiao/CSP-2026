#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,l1,l2,r1,r2;
	string s1,s2;
	bool f1 = 0,f2 = 0,f3 = 0,f4 = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	l1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	l2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	r1 = (s1[2] - 'A');
	r2 = (s2[2] - 'A');
	if (c1 == c2) f1 = 1;
	else {
		cout << "0000";
		return 0;
	}
	if (l1 == l2) f2 = 1;
	if (f2&&((r1 > 2&&r2 > 2)||(r1 < 3&&r2 < 3))) f3 = 1;
	if (f3&&abs(r2 - r1) == 1) f4 = 1;
	cout << f1 << f2 << f3 << f4;
	return 0;
}
