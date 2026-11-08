#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<'1';
		string s1,s2;
		s1=a2[0]+a2[1];
		s2=b2[0]+b2[1];
		if(s1==s2)
		{
			cout<<1;
			int d,f;
			d=int(a2[2]);
			f=int(b2[2]);
			if((d==67||d==65||d==66)&&(f==67||f==65||f==66))
			{
				cout<<1;
				if(abs(d-f)==1)
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
				return 0;
			}
			if((d==68&&f==69)||(d==69&&f==68))
			{
				cout<<11;
				return 0;
			}
			cout<<"00";
		}
		else
		{
			cout<<"000";
		}
	}
	return 0;//ccf China quanqianxiehui
} 
