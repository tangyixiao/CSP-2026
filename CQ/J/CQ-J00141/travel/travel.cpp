#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string a,b,c,d,e,f;
char x,y;

bool ff(char x,char y)
{
	if(x=='A' || x=='B' || x=='C')
	{
		return (y=='A' || y=='B' || y=='C');
	}
	else
	{
		return (y=='D' || y=='f');
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	e=b[0]+b[1];
	f=d[0]+d[1];
	x=b[2];y=d[2];
	if(a==c)
	{
		cout<<1;
		if(e==f)
		{
			cout<<1;
			if(ff(x,y))
			{
				cout<<1;
				if(abs(x-y)==1)
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
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
