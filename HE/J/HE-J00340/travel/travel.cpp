#include<bits/stdc++.h>
using namespace std;
int num[10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	char BB=b[2],DD=d[2];
	if(BB=='A')
		num[1]=1;
	if(BB=='B')
		num[2]=1;
	if(BB=='C')
		num[3]=1;
	if(BB=='D')
		num[4]=1;
	if(BB=='E')
		num[5]=1;
	if(DD=='A')
		num[1]=1;
	if(DD=='B')
		num[2]=1;
	if(DD=='C')
		num[3]=1;
	if(DD=='D')
		num[4]=1;
	if(DD=='E')
		num[5]=1;
	if(a==c)
	{
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<1;
			if(num[1]+num[2]+num[3]==2||num[4]+num[5]==2)
			{
				cout<<1;
				if(num[1]+num[2]==2||num[2]+num[3]==2||num[4]+num[5]==2)
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
				return 0;
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}
