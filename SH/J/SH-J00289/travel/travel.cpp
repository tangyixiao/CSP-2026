#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x,y,x1,y1;
	cin>>x>>y>>x1>>y1;
	if(x1==x)
	{
		cout<<"1";
		if(y[0]==y1[0] and y[1]==y1[1])
		{
			cout<<"1";
			if(((y[2]=='A' or y[2]=='B' or y[2]=='C') and (y1[2]=='A' or y1[2]=='B' or y1[2]=='C')) or ((y[2]=='D' or y[2]=='E') and (y1[2]=='D' or y1[2]=='E')))
			{
				cout<<"1";
				if(y[2]=='A' and y1[2]=='B' or y[2]=='B' and y1[2]=='A' or y[2]=='C' and y1[2]=='B' or y[2]=='D' and y1[2]=='E' or y[2]=='E' and y1[2]=='D')
				{
					cout<<"1";
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
