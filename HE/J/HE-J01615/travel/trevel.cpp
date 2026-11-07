#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a;
	cin>>c;
	cin>>b;
	cin>>d;
	bool e=0,h=0,f=0,g=0;
	if(a==b)
	{
		e=1;
		if(c[0]==d[0]&&c[1]==d[1])
		{
			h=1;
			
			if(((c[2]=='A'||c[2]=='B'||c[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((c[2]=='D'||c[2]=='F')&&(d[2]=='D'||d[2]=='F')))
		    {
			
			f=1;
			g=1;
	    }
	}
	}
	else
	{
		e=0;
		h=0;
		f=0;
		g=0;
	}
	cout<<e<<h<<f<<g;
	return 0;
}
