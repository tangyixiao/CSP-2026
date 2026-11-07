#include<bits/stdc++.h>
using namespace std;
string x,y,z,u;
int a,b,c,d,e=0,f=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> x >> y >> z >> u;
	a=(x[0]-'0')*10+x[1]-'0';
	c=(z[0]-'0')*10+z[1]-'0';
	if(a!=c)
	{
		cout << "0000";
		return 0;
	}
	else cout << "1";
	b=(y[0]-'0')*10+y[1]-'0';
	d=(u[0]-'0')*10+u[1]-'0';
	if(b!=d)
	{
		cout << "000";
		return 0;
	}
	else cout << "1";
	if(y[2]=='A'||y[2]=='B'||y[2]=='C') e=1;
	if(u[2]=='A'||u[2]=='B'||u[2]=='C') f=1;
	if(e!=f)
	{
		cout << "00";
		return 0;
	}
	else cout << "1";
	if(y[2]=='A') e=1;
	if(y[2]=='B') e=2;
	if(y[2]=='C') e=3;
	if(y[2]=='D') e=4;
	if(y[2]=='E') e=5;
	if(u[2]=='A') f=1;
	if(u[2]=='B') f=2;
	if(u[2]=='C') f=3;
	if(u[2]=='D') f=4;
	if(u[2]=='E') f=5;
	if(abs(e-f)==1) cout << "1";
	else cout << "0";
	return 0;
} 
