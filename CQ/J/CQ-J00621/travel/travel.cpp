#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans[9];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans[1]=1;
	if(ans[1])
	{
		if(s1[0]==s2[0]&&s1[1]==s2[1]) ans[2]=1;
	}
	if(ans[2]==1)
	{
		if(s1[2]=='A')
		{
			if(s2[2]=='B') ans[3]=1;
			if(s2[2]=='C') ans[3]=1;
		}
		if(s1[2]=='B')
		{
			if(s2[2]=='A') ans[3]=1;
			if(s2[2]=='C') ans[3]=1;
		}
		if(s1[2]=='C')
		{
			if(s2[2]=='A') ans[3]=1;
			if(s2[2]=='B') ans[3]=1;
		}
		if(s1[2]=='D')
		{
			if(s2[2]=='F') ans[3]=1;
		}
		if(s1[2]=='F')
		{
			if(s2[2]=='D') ans[3]=1;
		}
	}
	if(ans[3]==1)
	{
		int x;
		x=abs(s1[2]-s2[2]);
		if(x==1) ans[4]=1;
	}
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}
