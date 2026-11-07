#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int a[100],b[100];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		a[1]=s1[1];
		b[1]=s2[1];
		a[2]=s1[2];
		b[2]=s2[2];
		if(a[1]==b[1])
		{
			cout<<"1";
			if((a[2]<=67&&b[2]<=67)||(a[2]>=68&&b[2]>=68))
			{
				cout<<"1";
				if(a[2]+1==b[2]||a[2]-1==b[2])
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
