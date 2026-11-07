#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int x,y,nx,ny,n,m;
int main()
{
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	for (int i=0;i<2;i++)
	{
		x=x*10+a[i];
		nx=nx*10+c[i];
		y=y*10+b[i];
		ny=ny*10+d[i];
	}
	if (b[2]=='A'||b[2]=='C'||b[2]=='B')
	{
		n=1;
	}
	else
	{
		n=0;
	}
	if (d[2]=='A'||d[2]=='C'||d[2]=='B')
	{
		m=1;
	}
	else
	{
		m=0;
	}
	if (x==nx)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if (x==nx&&ny==y)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if (x==nx&&ny==y&&n==m)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if (x==nx&&ny==y&&n==m&&((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')||(b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')))
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
