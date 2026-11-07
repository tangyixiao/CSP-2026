#include<bits/stdc++.h>
using namespace std;
string ans, cx, cr, sx, sr, x, r;
bool check1(char x, char y)
{
	if((x == 'A' && y == 'B') || (x == 'A' && y == 'C') || (x == 'B' && y == 'C') || (y == 'A' && x == 'B') || (y == 'A' && x == 'C') || (y == 'B' && x == 'C') || (x == 'D' && y == 'E') || (y == 'D' && x == 'E'))
	{
		return true;
	}
	return false;
}
bool check2(char x, char y)
{
	if((x == 'A' && y == 'B') || (x == 'B' && y == 'c') || (x == 'D' && y == 'E') || (y == 'A' && x == 'B') || (y == 'B' && x == 'c') || (y == 'D' && x == 'E')){
		return true;
	}
	return false;
}
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cr >> sr >> cx >> sx;
	r = sr[0] + sr[1];
	x = sx[0] + sx[1];
	char pr, px;
	pr = sr[2];
	px = sx[2];
	if(cr == cx)
	{
		ans += '1';
	}
	else {
		ans += '0';
	}
	if(x == r && cr == cx)
	{
		ans += '1';
	}
	else {
		ans += '0';
	}
	if(x == r && cr == cx && check1(pr, px))
	{
		ans += '1';
	}
	else {
		ans += '0';
	}
	if(x == r && cr == cx && check2(pr, px))
	{
		ans += '1';
	}
	else{
		ans += '0';
	}
	cout << ans;
	return 0;
} 
