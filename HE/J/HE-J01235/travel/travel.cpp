#include <bits/stdc++.h>
using namespace std;
int a,b,ge,shi,q,w;
string c,d;
int main()
{
	freopen("travel.in","r" ,stdin);
	freopen("travel.out","w",stdout); 
	cin>>a>>c>>b>>d;
	ge=c[0]-'0';
	shi=c[1]-'0';
	q=ge*10+shi;
	ge=d[0]-'0';
	shi=d[1]-'0';
	w=ge*10+shi;
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(q==w&&a==b)
	{
		cout<<1;
		if((c[2]=='A'||c[2]=='B'||c[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C')||(c[2]=='D'||c[2]=='E')&&(d[2]=='D'||d[2]=='E'))
		{
			cout<<1;
		
			if(c[2]-d[2]==1||d[2]-c[2]==1)
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		else
		{
			cout<<0<<0;
		}
	}
	else
	{
		cout<<0<<0<<0;
	}
	
	
}
