#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<1;
			int ss1,ss2;
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')ss1=1;
			if(s1[2]=='D'||s1[2]=='F')ss1=2;
			if(s2[2]=='A'||s2[2]=='B'||s1[2]=='C')ss2=1;
			if(s2[2]=='D'||s2[2]=='F')ss2=2;
			if(ss1==ss2)
			{
				cout<<1;
				if(ss1==2&&ss2==2)cout<<1;
				else if(abs(s1[2]-s2[2])==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 