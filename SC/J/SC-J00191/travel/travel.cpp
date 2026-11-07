#include <bits/stdc++.h>
using namespace std;
int a1,a2,b1,b2;
char a3,b3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	if(a1==b1)
	{
		cout<<"1";
		if(a2==b2)
		{
			cout<<"1";
			if(a3>=65&&a3<=67&&b3<=67&&b3>=65)
			{
				if(abs(a3-b3)==1)
				{
					cout<<"11";
					return 0;
				}
				else
				{
					cout<<"10";
					return 0;
				}
			}
			else
			{
				if((a3==68&&b3==70)||(a3==70&&b3==68))
				{
					cout<<"1111";
					return 0;
				}
				cout<<"00";
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
}