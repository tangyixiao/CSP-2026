#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool e=0,f=0,g=0,h=0;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		e=1;
	}
	if(e==1 && b[0]==d[0] && b[1]==d[1])
	{
		f=1;
	}
	if(f==1)
	{
		if((b[2]<='51' && d[2]<='51') || (b[2]>='52' && d[2]>='52'))
		{
			g=1;
		}
	}
	if(g==1 && (b[2]+1==d[2] || d[2]+1==b[2] || (d[2]=='52' && b[2]=='54') || (b[2]=='52' && d[2]=='54')))
	{
		h=1;
	}
	cout<<e<<f<<g<<h;
	return 0;
}
