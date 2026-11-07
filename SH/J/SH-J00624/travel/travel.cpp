#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in",r,stdin);
	freopen("travel.out",w,stdout);
	string c1,s1,c2,s2;
	bool flag=0;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2) cout<<1;
	else cout<<0;
	if (c1==c2)
	{
		for (int i=0;i<2;i++)
		{
			if (s1[i]!=s2[i])
			{
				cout<<0;
				flag=1;
				break;
			}
		}
		if (!flag) cout<<1;
	}
	else cout<<0;
	flag=0;
	if (c1==c2)
	{
		if ((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))
		{
			for (int i=0;i<2;i++)
			{
				if (s1[i]!=s2[i])
				{
					cout<<0;
					flag=1;
					break;
				}
			}
			if (!flag) cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
	flag=0;
	if ((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))
	{
		for (int i=0;i<2;i++)
		{
			if (s1[i]!=s2[i])
			{
				cout<<0;
				flag=1;
				break;
			}
		}
		if (!flag) cout<<1;
	}
	else cout<<0;
	return 0; 
}
