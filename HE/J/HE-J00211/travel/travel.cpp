#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
string t1,s1,t2,s2;
string ans;
string y="1",n="0";
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>t1>>s1>>t2>>s2;
	if(t1==t2) ans+=y;
	else 
	{
		ans="0000";
		cout<<ans;
		return 0;
	}
	string a=s1.substr(0,2),b=s2.substr(0,2);
	if(a==b) 
	{
		ans+=y;
		if((s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A')||(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D'))
			ans+=y;
		else
		{
			ans="1100";
			cout<<ans;
			return 0;
		}
	}else
	{
		ans="1000";
		cout<<ans;
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))
		ans+=y;
	else ans+=n;
	cout<<ans;
	return 0;
}
