#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	char r[15],x[15];
	cin>>a;
	for(int i=1;i<=3;i++)
		cin>>r[i];
	cin>>b;
	for(int i=1;i<=3;i++)
		cin>>x[i];
	if(a==b)
	{
		cout<<"1";
		if(r[1]==x[1]&&r[2]==x[2])
		{
			cout<<"1";
			if((r[3]=='A'&&(x[3]=='B'||x[3]=='C'))||(r[3]=='B'&&(x[3]=='A'||x[3]=='C'))||(r[3]=='C'&&(x[3]=='A'||x[3]=='B'))||(r[3]=='D'&&x[3]=='F')||(r[3]=='F'&&x[3]=='D'))
			{
				cout<<"1";
				if(r[3]+1==x[3]||r[3]-1==x[3])
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