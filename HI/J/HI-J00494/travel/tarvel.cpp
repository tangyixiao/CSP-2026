#include<bits/stdc++.h>
using namespace std;
string r1,r2,x1,x2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans=0,k=0;
	cin>>r1>>r2>>x1>>x2;
	for(int i=0;i<2;i++)
	{
		if(r1[i]==x1[i])
		{
			ans++;
		}
		else
		{
			cout<<'0';
			cout<<'0';
			cout<<'0';
			cout<<'0';
			return 0;
		}
		if(ans==2)
		{
			cout<<'1';
			break;
		}
	}
	for(int i=0;i<2;i++)
	{
		if(r2[i]==x2[i])
		{
			k++;
		}
		else
		{
			cout<<'0';
			cout<<'0';
			cout<<'0';
			return 0;
		}
		if(k==2)
		{
			cout<<'1';
			break;
		}
	}
	if(r2[2]=='A'||r2[2]=='B'||r2[2]=='C')
	{
		if(x2[2]=='A'||x2[2]=='B'||x2[2]=='C')
		{
			cout<<'1';
			if(r2[2]-1==x2[2]-0||r2[2]+1==x2[2]-0)
			{
				cout<<'1';
				return 0;
			}
			else
			{
				cout<<'0';
				return 0;
			}
		}
		else
		{
			cout<<'0';
			cout<<'0';
			return 0;
		}
	}
	else
	{
		if(x2[2]=='F'||x2[2]=='D')
		{
			cout<<'1';
			cout<<'1';
			return 0;
		}
		else
		{
			cout<<'0';
			cout<<'0';
			return 0;
		}
	}
	return 0;
}
