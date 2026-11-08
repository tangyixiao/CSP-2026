#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//Trick||Treat!
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	int x=(b[0]-48)*10+(b[1]-48);
	int y=(d[0]-48)*10+(d[1]-48);
	if(x==y)
	{
		cout<<1;
		if(b[2]=='D')
		{
			if(d[2]='F')
			{
				cout<<"11";
			}
			else
			{
				cout<<"00";
			}
		}
		else if(b[2]=='F')
		{
			if(d[2]='D')
			{
				cout<<"11";
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			if(abs(b[2]-d[2])<=2&&d[2]<'D')
			{
				cout<<"1";
				if((abs(b[2]-d[2]))<=1&&d[2]<'D')
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"00";
			}
		}
	}
	else
	{
		cout<<"000";
	}
	return 0;
}
