#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string xr, x_x, xrc, xxc;
	cin >> xrc >> xr >> xxc >> x_x;
	int rn, rs;
	char xrs;
	if (xr[0] == '0'){
		rs = xr[1] - '0';
		xrs = xr[2];
	}
	else {
		rs = (xr[0] - '0') * 10 + (xr[1] - '0');
		xrs = xr[2];
	}
	if (xrc[0] == '0'){
		rn = xrc[1] - '0';
	} 
	else{
		rn = (xrc[0] - '0') * 10 + (xrc[1] - '0');
	}
	int xn, xs;
	char xxs;
	if (x_x[0] == '0'){
		xs = x_x[1] - '0';
		xxs = x_x[2];
	}
	else {
		xs = (x_x[0] - '0') * 10 + (x_x[1] - '0');
		xxs = x_x[2];
	}
	if (xxc[0] == '0'){
		xn = xxc[1] - '0';
	} 
	else{
		xn = (xxc[0] - '0') * 10 + (xxc[1] - '0');
	}
	bool flag1 = (xn == rn);
	bool flag2 = flag1 && (xs == rs);
	bool flag3 = flag2 && ((xrs <= 'C' && xxs <= 'C') || (xrs >= 'D' && xxs >= 'D'));
	bool flag4 = flag3 && ((xrs == 'A' && xxs == 'B') || (xrs == 'B' && xxs == 'C') || (xrs == 'D' && xxs == 'F'));
	cout << flag1 <<flag2 << flag3 <<flag4;
	return 0;
} 
