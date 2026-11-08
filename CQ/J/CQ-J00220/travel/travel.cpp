#include<bits/stdc++.h>

using namespace std;
string c1,c2,c3,c4;
int a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		cout<<"1";
		if(c2[0]==c4[0]&&c2[1]==c4[1])
		{
			cout<<"1";
			if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C')
			{
				a=0;
			}
			else
			{
				a=1;
			}
			if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C')
			{
				b=0;
			}
			else
			{
				b=1;
			}
			if(a==b)
			{
				cout<<"1";
				if(c2[2]=='F')
				{
					c2[2]='E';
				}
				if(c4[2]=='F')
				{
					c4[2]='E';
				}
				if(abs(c4[2]-c2[2])==1)
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
