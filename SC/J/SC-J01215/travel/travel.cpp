#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool w,x,y,z;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) w=1;
	if(w&&b[0]==d[0]&&b[1]==d[1]) x=1;
	if(w&&x)
	{
		if(b[2]<='C'&&d[2]<='C') y=1;
		if(b[2]>'C'&&d[2]>'C') y=1;
	}
	if(w&&x&&y)
	{
		if((b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')) z=1;
		else if(abs(b[2]-d[2])==1) z=1;
	}
	cout<<w<<x<<y<<z;
	return 0;
}