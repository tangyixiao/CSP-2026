#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		int flag=1;
		for(int i=0;i<=1;i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=0;
			}
		}
		if(flag)
		{
			cout<<1;
			if((s1[2]-64<=3 && s2[2]-64<=3) || (s1[2]-64>3 && s2[2]-64>3))
			{
				cout<<1;
				if((s1[2]-64<=3 && s2[2]-64<=3))
				{
					if(s1[2]-64+1==s2[2]-64 || s1[2]-64-1==s2[2]-64)
					{
						cout<<1;
					}
					else
					{
						cout<<0;
					}
				}
				if((s1[2]-64>3 && s2[2]-64>3))
				{
					if((s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D'))
					{
						cout<<1;
					}
					else
					{
						cout<<0;
					}
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
