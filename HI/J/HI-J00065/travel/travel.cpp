#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,s1,a,a1,ans;
	cin>>s>>s1>>a>>a1;
	if(s==a)
	{
		ans+='1';
		if(s1.substr(0,2)==a1.substr(0,2))
		{
			ans+='1';
			if(s1[2]>='A'&&s1[2]<='C'&&a1[2]>='A'&&a1[2]<='C'||s1[2]>='D'&&s1[2]<='F'&&a1[2]>='D'&&a1[2]<='F')
			{
				ans+='1';
				if(abs(s1[2]-a1[2])==1)
				{
					ans+='1';
					cout<<ans;
				}
				else
				{
					cout<<"1110";
				}
			}
			else
			{
				cout<<"1100";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
