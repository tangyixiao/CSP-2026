#include <bits/stdc++.h>
using namespace std;
int n,m;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=17;i++)
	{
		if(i==1||i==16)
		{
			continue;
		}
		if(n=m)
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
		if(s1[0]==s2[0]&&s1[1]==s2[1]&&((s1[2]<='c'&&s2[2]<='c')||(s1[2]>'c'&&s2[2]>'c')))
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
		if(s1[0]==s2[0]&&s1[1]==s2[1]&&((s1[2]<='c'&&s2[2]<='c')||(s1[2]>'c'&&s2[2]>'c'))&&s1[2]-s2[2]==1)
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
	}
	return 0;
}