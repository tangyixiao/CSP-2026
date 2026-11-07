#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool ss()
{
	if(s1[2]=='F' && s2[2]=='D') return 1;
	if(s1[2]=='D' && s2[2]=='F') return 1;
	if(s1[2]=='A' && s2[2]=='B') return 1;
	if(s1[2]=='B' && s2[2]=='A') return 1;
	if(s1[2]=='A' && s2[2]=='C') return 1;
	if(s1[2]=='C' && s2[2]=='A') return 1;
	if(s1[2]=='B' && s2[2]=='C') return 1;
	if(s1[2]=='C' && s2[2]=='B') return 1;
	return 0;
}
bool bs()
{
	if(s1[2]=='F' && s2[2]=='D') return 1;
	if(s1[2]=='D' && s2[2]=='F') return 1;
	if(s1[2]=='A' && s2[2]=='B') return 1;
	if(s1[2]=='B' && s2[2]=='A') return 1;
	if(s1[2]=='B' && s2[2]=='C') return 1;
	if(s1[2]=='C' && s2[2]=='B') return 1;
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		if(s1[1]==s2[1])
		{
			if(ss()==1)
			{
				if(bs()==1) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
}
