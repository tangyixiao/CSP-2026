#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans[10];
bool check()
{
	if(s1[2]=='A')
	{
		if(s2[2]=='B'||s2[2]=='C') return 1;
	}
	else if(s1[2]=='B')
	{
		if(s2[2]=='A'||s2[2]=='C') return 1;
	}
	else if(s1[2]=='C')
	{
		if(s2[2]=='A'||s2[2]=='B') return 1;
	}
	else if(s1[2]=='D')
	{
		if(s2[2]=='F') return 1;
	}
	else if(s1[2]=='F')
	{
		if(s2[2]=='D') return 1;
	}
	return 0;
}
bool check2()
{
	if(s1[2]=='A')
	{
		if(s2[2]=='B') return 1;
	}
	else if(s1[2]=='B')
	{
		if(s2[2]=='A'||s2[2]=='C') return 1;
	}
	else if(s1[2]=='C')
	{
		if(s2[2]=='B') return 1;
	}
	else if(s1[2]=='D')
	{
		if(s2[2]=='F') return 1;
	}
	else if(s1[2]=='F')
	{
		if(s2[2]=='D') return 1;
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans[1]=1;
	if(ans[1]&&s1.substr(0,2)==s2.substr(0,2)) ans[2]=1;
	if(ans[2]&&check()) ans[3]=1;
	if(ans[3]&&check2()) ans[4]=1;
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}
