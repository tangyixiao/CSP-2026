#include<bits/stdc++.h>
using namespace std;
const int N=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie();
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans;
	if(c1==c2) 
	{
		ans+='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			ans+='1';
			int a1=s1[2]-'A',a2=s2[2]-'A';
			if((a1>2&&a2>2)||(a1<3&&a2<3)) 
			{
				ans+='1';
				if(s1[2]=='C')
				{
					if(s2[2]=='B') ans+='1';
					else ans+='0';
				}
				else if(s1[2]=='D')
				{
					if(s2[2]=='F') ans+='1';
					else ans+='0';
				}
				else if(s2[2]=='C')
				{
					if(s1[2]=='B') ans+='1';
					else ans+='0';
				}
				else if(s2[2]=='D')
				{
					if(s1[2]=='F') ans+='1';
					else ans+='0';
				}
				else
				{
					if(abs(s1[2]-s2[2])==1) ans+='1';
					else ans+='0';
				}
			}
			else ans+='0',ans+='0';
		}
		else
			ans+='0',ans+='0',ans+='0';
	}
	else ans+='0',ans+='0',ans+='0',ans+='0';
	cout<<ans;
	return 0;
}