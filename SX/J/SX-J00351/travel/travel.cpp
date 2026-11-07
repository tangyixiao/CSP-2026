#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string s1,s2,t1,t2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>s1>>t1>>s2>>t2;
	if(s1==s2)cout<<"1";
	else{cout<<"0000";return 0;}
	if(t1[0]==t2[0]&&t1[1]==t2[1])
	{
		cout<<"1";
		if(t1[2]=='A')
		{
			if(t2[2]=='B')cout<<"11";
			else if(t2[2]=='C')cout<<"10";
			else cout<<"00";
		}
		else if(t1[2]=='B')
		{
			if(t2[2]=='A'||t2[2]=='C')cout<<"11";
			else cout<<"00";
		}
		else if(t1[2]=='C')
		{
			if(t2[2]=='B')cout<<"11";
			else if(t2[2]=='A')cout<<"10";
			else cout<<"00";
		}
		else if(t1[2]=='D')
		{
			if(t2[2]=='F')cout<<"11";
			else cout<<"00";
		}
		else if(t1[2]=='F')
		{
			if(t2[2]=='D')cout<<"11";
			else cout<<"00";
		}
	}
	else cout<<"000";
	return 0;
}