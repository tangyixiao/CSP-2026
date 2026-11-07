#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if (s1[0]==s2[0]&&s1[1]==s2[1])
			{
				cout<<1;
			}
			else
			{
			    cout<<0;
			}
			if ((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
			if(s1[2]+'1'==s2[2]||s2[2]+'1'==s1[2])
			{
				cout<<1;
			}else
			{
				cout<<0;
			}
		}
		
	}
	return 0;
}
