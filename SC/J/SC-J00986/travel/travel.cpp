#include <bits/stdc++.h>
#define ll long long
using namespace std;
string ca = "", cb = "", cc = "", cd = "";
int fa = 0, fb = 0, fc = 0, fd = 0, aa = 0, bb = 0;
int main() {
	freopen ( "travel.in", "r", stdin );
	freopen ( "travel.out", "w", stdout );
	cin >> ca >> cb >> cc >> cd;

	if ( ca == cc ) fa = 1;

	aa = ( cb[0] - '0' ) * 10 + ( cb[1] - '0' );

	bb = ( cd[0] - '0' ) * 10 + ( cd[1] - '0' );

//	cout << aa << " " << bb << endl;

	if ( aa == bb ) fb = 1;

	char dd = cb[2];
	char ee = cd[2];
//	cout << dd << " " << ee << endl;

	if ( ( 'A' <= dd && dd <= 'C' && 'A' <= ee && ee <= 'C' ) || ( 'D' <= dd && dd <= 'F' && 'D' <= ee && ee <= 'F' ) )
		fc = 1;

	if ( 'D' <= dd && dd <= 'F' && 'D' <= ee && ee <= 'F' ) fd = 1;

//	else if ( dd + 1 == ee || dd - 1 == ee || ee + 1 == dd || ee - 1 == dd &&  ! ( ee >= 'D' || dd >= 'D' ) ) fd = 1;
	if ( ( dd == 'A' && ee == 'B' ) || ( dd == 'B' && ee == 'A' ) || ( dd == 'C' && ee == 'B' )  || ( dd == 'B' && ee == 'C' ) ) fd = 1;

	if ( !fa ) fb = 0, fc = 0, fd = 0;

	if ( !fb ) fc = 0, fd = 0;

	if ( !fc ) fd = 0;

	cout << fa << fb << fc << fd;

	return 0;
}