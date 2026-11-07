#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	int a[10];
	if(c1==c2)
	{
		a[1]=1;
		if(s1[0]==s2[0])
		{
			if(s1[1]==s2[1])
			{
				a[2]=1;
				if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')
				{
					if(s2[2]=='A'||s2[2]=='B'||s1[2]=='C')
					{
						a[3]=1;
						if(s1[2]=='A'&&s2[2]=='B')
						{
							a[4]==1;
						}
						else if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))
						{
							a[4]==1;
						}
						else if(s1[2]=='C'&&s2[2]=='B')
						{
							a[4]==1;
						}
						else
						{
							a[4]=0;
						}
					}
					else
					{
						a[3]=0;
						a[4]=0;
					}
				}
				else if(s1[2]=='D'||s1[2]=='E')
				{
					if(s2[2]=='D'||s2[2]=='E')
					{
						a[3]=1;
						if(s1[2]=='D'&&s2[2]=='E')
						{
							a[4]==1;
						}
						else if(s1[2]=='C'&&s2[2]=='E')
						{
							a[4]==1;
						}
						else
						{
							a[4]=0;
						}
					}
					else
					{
						a[3]=0;
						a[4]=0;
					}
				}
				else
				{
					a[3]=0;
					a[4]=0;
				}
			}
			else
			{
				a[2]=0;
				a[3]=0;
				a[4]=0;
			}
		}
		else
		{
			a[2]=0;
			a[3]=0;
			a[4]=0;
		}
	}
	else
	{
		a[1]=0;
		a[2]=0;
		a[3]=0;
		a[4]=0;
	}
	cout <<a[1]<<a[2]<<a[3]<<a[4];
	return 0;
}

