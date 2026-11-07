#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2,ans;
	cin>>s1>>s2>>c1>>c2;
	if(s1==c1)
	{
		ans+="1";
		int l=(s2[0]-'0')*10+(s2[1]-'0');
		int r=(c2[0]-'0')*10+(c2[1]-'0');
		char a=s2[2],b=c2[2];
		if(l==r)
		{
			ans+="1";
			if(((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C'))||((a=='D'||a=='F')&&(b=='D'||b=='F')))
			{
				ans+="1";
				if(((a=='A'||a=='B')&&(b=='A'||b=='B'))||((a=='C'||a=='B')&&(b=='C'||b=='B'))||((a=='F'||a=='D')&&(b=='D'||b=='F')))
				{
					ans+="1";
				}
				else ans+="0";
			}
			else ans+="00";
		}
		else ans+="000";
	}
	else ans+="0000";
	cout<<ans;
	return 0;
}