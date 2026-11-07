#include <bits/stdc++.h>
using namespace std;
string ans="0000",c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='D')s1[2]='G';
	if(s2[2]=='D')s2[2]='G';
	if(c1==c2)ans[0]='1';
	else
	{
		cout<<ans;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])ans[1]='1';
	else
	{
		cout<<ans;
		return 0;
	}
	if(s1[2]-s2[2]<3&&s2[2]-s1[2]<3)ans[2]='1';
	else
	{
		cout<<ans;
		return 0;
	}
	if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)ans[3]='1';
	cout<<ans;
	return 0;
}
