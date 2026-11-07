#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char c1[10],c2[10],s1[10],s2[10];
	cin>>c1>>s1>>c2>>s2;
	bool ans1=0,ans2=0,ans3=0,ans4=0;
	ans1=(strcmp(c1,c2)==0);
	if(ans1==1&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		ans2=1;
	}
	if(ans2&&((s1[2]>'C'&&s2[2]>'C')||(s1[2]<='C'&&s2[2]<='C')))
	{
		ans3=1;
	}
	if(ans3&&((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='F')))
	{
		ans4=1;
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}

