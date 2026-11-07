#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<1;
			if(b[2]<'D'&&d[2]<'D')
			{
				cout<<1;
				if(b[2]=='A'&&d[2]=='C')
				{
					cout<<0;
				}
				else if(b[2]=='C'&&d[2]=='A')
				{
					cout<<0; 
				}
				else
				{
					cout<<1;
				}
			}
			else if(b[2]>='D'&&d[2]>='D')
			{
				cout<<1;
				cout<<1;
			}
			else
			{
				cout<<0;
				cout<<0;
			}
		}
		else
		{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
