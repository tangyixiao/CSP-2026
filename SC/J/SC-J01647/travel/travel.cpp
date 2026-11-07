#include <bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2;
string c1,s1,c2,s2,ans="0000";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(s1[0]-'0')*10+(s1[1]-'0');
	a2=(s2[0]-'0')*10+(s2[1]-'0');
	if(s1[2]=='F')
	{
		b1=s1[2]-'A'-1;
	}
	else
	{
		b1=s1[2]-'A';
	}
	if(s2[2]=='F')
	{
		b2=s2[2]-'A'-1;
	}
	else
	{
		b2=s2[2]-'A';
	}
	cout<<b1<<' '<<b2<<endl;
	if(c1==c2)
	{
		ans[0]='1';
		if(a1==a2)
		{
			ans[1]='1';
			if((b1<3&&b2<3)||(b1>=3&&b2>=3))
			{
				ans[2]='1';
				if(b1-b2==1||b2-b1==1)
				{
					ans[3]='1';
				}
				else ans[3]='0';
			}
			else ans[2]='0';
		}
		else
		{
			ans[1]='0';
		}
	}
	else
	{
		ans[0]='0';
	}
	cout<<ans;
	return 0;
}