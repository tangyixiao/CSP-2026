#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<1;
			int a1=b[2]-'A',a2=d[2]-'A';
			if((a1<3&&a2<3)||(a1>2&&a2>2))
			{
				cout<<1;
				if((a1<3&&a2<3&&(a1-a2==1||a1-a2==-1))||(a1>2&&a2>2))
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
