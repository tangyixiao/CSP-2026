#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag1,flag2,flag3,flag4;
	if(c1!=c2) flag1=flag2=flag3=flag4=0;
	else
	{
		flag1=1;
		if(s1[0]!=s2[0]||s1[1]!=s2[1])
		{
			flag2=flag3=flag4=0;
		}
		else
		{
			flag2=1;
			char a=s1[2],b=s2[2];
			if(a=='D'&&b=='F') flag3=1;
			else if(a=='F'&&b=='D') flag3=1;
			else if(a=='A'&&b=='B') flag3=1;
			else if(a=='B'&&b=='A') flag3=1;
			else if(a=='B'&&b=='C') flag3=1;
			else if(a=='C'&&b=='B') flag3=1;
			else if(a=='A'&&b=='C') flag3=1;
			else if(a=='C'&&b=='A') flag3=1;
			else flag3=flag4=0;
			
			if(flag3)
			{
				if(a=='F'&&b=='D') flag4=1;
				else if(a=='D'&&b=='F') flag4=1;
				else if(a=='A'&&b=='B') flag4=1;
				else if(a=='B'&&b=='A') flag4=1;
				else if(a=='B'&&b=='C') flag4=1;
				else if(a=='C'&&b=='B') flag4=1;
				else flag4=0;
			}
			else flag4=0;
		}
	}
	int ans1,ans2,ans3,ans4;
	if(flag1) ans1=1;
	else ans1=0;
	if(flag2) ans2=1;
	else ans2=0;
	if(flag3) ans3=1;
	else ans3=0;
	if(flag4) ans4=1;
	else ans4=0;
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}