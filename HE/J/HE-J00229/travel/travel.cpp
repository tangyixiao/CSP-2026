#include<bits/stdc++.h>
#define ll long long
const int N=1e5+10;
using namespace std;
string s[10];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++)
		cin>>s[i];
	if(s[1]!=s[3])
	{
		cout<<"0000";
		return 0;
	}
	else
		cout<<"1";
	if(s[2][0]==s[4][0]&&s[2][1]==s[4][1])
		cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if((s[2][0]==s[4][0]&&s[2][1]==s[4][1])&&(s[2][2]<='C'&&s[4][2]<='C')||(s[2][2]>='D'&&s[4][2]>='D'))
		cout<<"1";
	else
	{
		cout<<"00";
		return 0;
	}
	if((s[2][0]==s[4][0]&&s[2][1]==s[4][1])&&(((s[2][2]+1==s[4][2])||(s[2][2]-1==s[4][2]))||((s[2][2]=='D'&&s[4][2]=='F')||(s[2][2]=='F'&&s[4][2]=='D')))&&((s[2][0]==s[4][0]&&s[2][1]==s[4][1])&&((s[2][2]<='C'&&s[4][2]<='C')||(s[2][2]>='D'&&s[4][2]>='D'))))
		cout<<"1";
	else
		cout<<"0";
	return 0;
}
