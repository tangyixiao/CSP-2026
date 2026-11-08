#include<bits/stdc++.h>
using namespace std;
string a,b,x,y;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if(a==b)
	{
		if(x[0]==y[0]&&x[1]==y[1])
		{
			if(((x[2]=='A')||(x[2]=='B')||(x[2]=='C'))&&((y[2]=='A')||(y[2]=='B')||(y[2]=='C')))
			{
				if(x[2]=='A'&&y[2]=='C')
				{
					cout<<"1110";	
				}	
				else if(x[2]=='C'&&y[2]=='A')
				{
					cout<<"1110";
				}
				else
				{
					cout<<"1111";
				}
			}
			else if(((x[2]=='D')&&(y[2]=='F'))||((y[2]=='D')&&(x[2]=='F')))
			{
				cout<<"1111";	
			}
			else
			{
				cout<<"1100";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
