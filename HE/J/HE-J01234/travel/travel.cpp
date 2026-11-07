#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string ans="0000";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		ans="1000";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			ans="1100";
			if((s1[2]>'C'&&s2[2]>'C')||(s1[2]<='C'&&s2[2]<='C'))
			{
				ans="1110";
				if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A')
				{
					ans="1111";
				}
				if(s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B')
				{
					ans="1111";
				}
				if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='B')
				{
					ans="1111";
				}
			}

		}

	}
	cout<<ans;
	return 0;
 } 
