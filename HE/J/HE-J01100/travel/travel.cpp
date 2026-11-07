#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string x, y, xx, yy;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> x >> y >> xx >> yy;
	ll ans = 0;
	if(x[0] - '0' == xx[0] - '0' && x[1] - '0' == xx[1] - '0')cout << "1";
	else {cout << "0000";return 0;}
	if(y[0] - '0' == yy[0] - '0' && y[1] - '0' == yy[1] - '0')cout << "1";
	else {cout << "000";return 0;}
	if(((y[2] == 'A' || y[2] == 'B' || y[2] == 'C') && (yy[2] == 'A' || yy[2] == 'B' || yy[2] == 'C')) || ((y[2] == 'D' || y[2] == 'F') && (yy[2] == 'D' || yy[2] == 'F')))
		cout <<"1";
	else {cout << "00";return 0;}
	if(((y[2] == 'A' || y[2] == 'B') && (yy[2] == 'A' || yy[2] == 'B')) || ((y[2] == 'B' || y[2] == 'C') && (yy[2] == 'B' || yy[2] == 'C')) || ((y[2] == 'D' || y[2] == 'F') && (yy[2] == 'D' || yy[2] == 'F')))
		cout << "1";
	else cout << "0";
	return 0;
}
