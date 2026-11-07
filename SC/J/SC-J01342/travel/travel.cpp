#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c1,c2;
	char s2[10],s1[10];
	cin>>c1;
	for(int i=0;i<3;i++)
	{
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++)
	{
		cin>>s2[i];
	}
	if(c1==c2)
	{
		cout<<1;
		if(s2[0]==s1[0]&&s2[1]==s1[1])
		{
			cout<<1;
			if(s1[2]<=67&&s2[2]<=67||s1[2]>67&&s2[2]>67)
			{
				cout<<1;
				if(abs(s1[2]-s2[2])==1)
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