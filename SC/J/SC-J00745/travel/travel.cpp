#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int c[2]; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c[0]>>s1>>c[1]>>s2;
	if(c[0]==c[1])
	{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<"1";
			int b=s1[2]-'A'+1,a=s2[2]-'A'+1;
			if(b>=1&&b<=3&&a>=1&&a<=3)
			{
				cout<<"1";
				if(b==a-1 ||a==b-1)
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else if(b>=4&&b<=5&&a>=4&&a<=5)
			{
				cout<<"11";
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
}