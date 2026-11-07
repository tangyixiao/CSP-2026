#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s1,s2,s3,s4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>s1>>s2>>s3>>s4;
	bool f=1;
	if(s1==s3)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s2[0]==s4[0]&&s2[1]==s4[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((s2[2]>='A'&&s2[2]<='C'&&s4[2]>='A'&&s4[2]<='C')||(s2[2]>='D'&&s2[2]<='F'&&s4[2]>='D'&&s4[2]<='F'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	int a=abs(int(s2[2]-s4[2]));
	if(a==1) cout<<"1";
	else cout<<"0";
	return 0;
} 
