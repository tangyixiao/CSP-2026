#include<bits/stdc++.h>
using namespace std;
int r1=0,x1=0;
string r2,x2;
int main()
{
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1)
	{
		cout<<"1";
		int r3=0,x3=0;
		for(int i=0;i<2;i++)
		{
			if(i==1)
			{
				r3+=r2[i]-'0';
				x3+=x2[i]-'0';
			}
			else
			{
				r3+=10*(r2[i]-'0');
				x3+=10*(x2[i]-'0');
			}
		}
		if(r3==x3)
		{
			cout<<"1";
			if((r2[2]>='A'&&r2[2]<='C'&&x2[2]>='A'&&x2[2]<='C')||(r2[2]>='D'&&r2[2]<='E'&&x2[2]>='D'&&x2[2]<='E'))
			{
				cout<<"1";
				if(r2[2]+1==x2[2]||r2[2]-1==x2[2])
					cout<<"1";
				else
					cout<<"0";
				return 0;
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
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	return 0;
}