#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x,y;
	int a[4];
	string s1,s2;
	cin>>x>>s1>>y>>s2;
	if(x==y)
	{
		a[0]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			a[1]=1;
			if(s1[2]-'0'>=17&&s2[2]-'0'>=17&&s1[2]-'0'<=19&&s2[2]-'0'<=19)
			{
				a[2]=1;
				int m=s1[2]-'0';
				int n=s2[2]-'0';
				if(m-n==1||n-m==1)
				{
					a[3]=1;
				}
				else
				{
					a[3]=0;
				}
			}
			else if(s1[2]-'0'==20&&s2[2]-'0'==22)
			{
			a[2]=1;
			a[3]=1;
			}
			else if(s1[2]-'0'==22&&s2[2]-'0'==20)
			{
			a[2]=1;
			a[3]=1;
			}
			else
			{
				a[2]=0;
				a[3]=0;
			}
		}
		else
		{
		a[1]=0;
		a[2]=0;
		a[3]=0;
		}
	}
	else
	{
		a[0]=0;
		a[1]=0;
		a[2]=0;
		a[3]=0;
	}
	for(int i=0;i<4;i++)
	{
		cout<<a[i];
	}
	return 0;
}