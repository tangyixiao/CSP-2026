#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,t,a,b;
	cin>>s>>t>>a>>b;
	if(s==a)
	{
		cout<<"1";
		if(t[0]==b[0]&&t[1]==b[1])
		{
			cout<<"1";
			if(t[2]=='D') 
			{
				if(b[2]=='F') cout<<"11";
			}
			else if(t[2]=='F')
			{
				if(b[2]=='D') cout<<"11";
				else cout<<"00";
			}
		    else if(t[2]==b[2]+1||b[2]==t[2]+1) cout<<"11"; 
			else cout<<"10";
		} 
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
