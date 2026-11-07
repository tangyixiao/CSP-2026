#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check1(char dx, char dy)
{
	if ((dx=='A'&&dy=='D')||(dy=='A'&&dx=='D')) return true;
	if ((dx=='A'&&dy=='F')||(dy=='A'&&dx=='F')) return true;
	if ((dx=='B'&&dy=='D')||(dy=='B'&&dx=='D')) return true;
	if ((dx=='B'&&dy=='F')||(dy=='B'&&dx=='F')) return true;
	if ((dx=='C'&&dy=='D')||(dy=='C'&&dx=='D')) return true;
	if ((dx=='C'&&dy=='F')||(dy=='C'&&dx=='F')) return true;
}

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string cx, sx, cy, sy;
	cin >> cx >> sx >> cy >> sy;
	string zwx=sx.substr(0,2), zwy=sy.substr(0,2);
	char dx=sx[2], dy=sy[2];
	bool fa, fb, fc, fd;
	fa=fb=fc=fd=true;
	if (cx!=cy) fa=fb=fc=fd=false;
	if (zwx!=zwy) fb=fc=fd=false;
	if (check1(dx, dy)) fc=fd=false;
	if ((dx=='A'&&dy=='C')||(dx=='C'&&dy=='A')) fd=false;
	cout << fa << fb << fc << fd;
	return 0;
}

