#include<bits/stdc++.h>
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
			int k1,k2;
			if(b[2]<='C')
			{
				k1=0;
			}else
			{
				k1=1;
			}if(d[2]<='C')
			{
				k2=0;
			}else
			{
				k2=1;
			}if(k1==k2)
			{
				cout<<1;
				if(k1==1)
				{
					cout<<1;
				}else if(b[2]=='B'||d[2]=='B')
				{
					cout<<1;
				}else
				{
					cout<<0;
				}
			}else
			{
				cout<<"00";
			}
		}else
		{
			cout<<"000";
		}
	}else
	{
		cout<<"0000";
	}
	
	return 0;
}
