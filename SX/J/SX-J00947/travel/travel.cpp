#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long c1,c2,ans1=0,ans2=0,x1,x2;
	string s1,s2;
	char a,b;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		for(int i=0;i<=1;i++)
		{
			ans1=ans1*10+(s1[i]-'0');
			ans2=ans2*10+(s2[i]-'0');
		}
		if(ans1==ans2)
		{
			cout<<1;
			if(s1[2]-'0'>=17 && s1[2]-'0'<=19 && s2[2]-'0'>=17 && s2[2]-'0'<=19)
			{
				cout<<1;
				x1=s1[2]-'0';
				x2=s2[2]-'0';
				if(abs(x1-x2)==1)
				{
					cout<<1;
				}
				else
				{
					cout<<"0";
				}
			}
			else if(s1[2]-'0'>=20 && s1[2]-'0'<=22 && s2[2]-'0'>=20 && s2[2]-'0'<=22)
			{
				cout<<1;
				x1=s1[2]-'0';
				x2=s2[2]-'0';
				if(abs(x1-x2)==2)
				{
					cout<<1;
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