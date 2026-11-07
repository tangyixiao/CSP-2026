#include <bits/stdc++.h>
using namespace std;

freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
int b1;
int b2;
int main() {
	string a1,a2,a3,a4;
	cin >> a1 >> a2 >> a3 >> a4;
	if (a1==a3) cout << 1;
	else cout << 0;
	if (a2[0]==a4[0] && a2[1]==a4[1]) cout << 1;
	else cout << 0;
	if (a2[2]=='A') b1 = 1;
	if (a2[2]=='B') b1 = 2;
	if (a2[2]=='C') b1 = 3;
	if (a2[2]=='D') b1 = 4;
	if (a2[2]=='E') b1 = 5;
	
	if (a4[2]=='A') b2 = 1;
	if (a4[2]=='B') b2 = 2;
	if (a4[2]=='C') b2 = 3;
	if (a4[2]=='D') b2 = 4;
	if (a4[2]=='E') b2 = 5;
	if ((b1<=3 && b2<=3) || (b1>3 && b2>3)) {
		cout << 1;
	}
	else cout << 0;
	if (((b1<=3 && b2<=3) || (b1>3 && b2>3)) && ((b1 == b2+1) || (b2 == b1+1))) cout << 1;
	else cout << 0;
}