#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans1,ans2,ans3,ans4;
bool chk(string a,string b)
{
	if ((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(a[2]=='D'||a[2]=='F'))
	{
		return 1;
	}
	if ((a[2]=='A'||a[2]=='B'||a[2]=='C')&&(b[2]=='D'||b[2]=='F'))
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		ans1=1;
	}
	if (s1[0]==s2[0]&&s1[1]==s2[1]&&ans1==1)
	{
		ans2=1;
	}
	if (ans2==1&&chk(s1,s2)==0)
	{
		ans3=1;
	}
	if (abs((s1[2]-'A')-(s2[2]-'A'))==1&&ans3==1)
	{
		ans4=1;
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
} 
