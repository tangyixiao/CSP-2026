#include <bits/stdc++.h>
#define int long long 
using namespace std;
string ss1,ss2,ss3,ss4;
int rx,xx,rp,xp,rc,xc;
int get(char c)
{
	if (c=='A') return 1;
	if (c=='B') return 1;
	if (c=='C') return 1;
	if (c=='D') return 2;
	if (c=='F') return 2;
}
bool chk(char a,char b)
{
	if (a=='A'&&b=='B') return 1;
	if (a=='B'&&b=='A') return 1;
	if (a=='B'&&b=='C') return 1;
	if (a=='C'&&b=='B') return 1;
	if (a=='D'&&b=='F') return 1;
	if (a=='F'&&b=='D') return 1;
	return 0;
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0); 
	cin >> ss1 >> ss2 >> ss3 >> ss4;
	for (int i=0;i<(int)ss1.size();i++)
	{
		rx=rx*10+ss1[i]-'0';
		xx=xx*10+ss3[i]-'0';
	}
	for (int i=0;i<(int)ss2.size()-1;i++)
	{
		rp=rp*10+ss2[i]-'0';
		xp=xp*10+ss4[i]-'0';
	}
	rc=get(ss2[2]);
	xc=get(ss4[2]);
	if (rx==xx) cout << 1;
	else cout << 0;
	if (rx==xx&&rp==xp) cout << 1;
	else cout << 0;
	if (rx==xx&&rp==xp&&rc==xc) cout << 1;
	else cout << 0;
	if (rx==xx&&rp==xp&&rc==xc&&chk(ss2[2],ss4[2])) cout << 1;
	else cout << 0;
}
//freopen
//多测 
//准考证号的文件夹 
// 02 01A 02 01B
//  02 01C 02 01A
//  02 01C 02 01D
//  02 02B 02 01A
//  17 17A 15 17B 
