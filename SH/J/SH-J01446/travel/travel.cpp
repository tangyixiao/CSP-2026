#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])
		{
			cout<<"000";
			return 0;
		}
	}
	cout<<1;
	int a=s1[2]-'A',b=s2[2]-'A';
	bool p=1;
	if((a<=2&&b<=2)||(a>2&&b>2))
	{
		cout<<1;
	}
	else
	{
		cout<<0; 
		p=0;
	}
	if(p&&(a-b==1||b-a==1))
	{
		cout<<1;
	}
	else cout<<0;
	return 0;
}
