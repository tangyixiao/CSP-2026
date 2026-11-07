#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;	
	
	bool w1=0,w2=0;
	if(s1[2]=='D' || s1[2]=='F') w1=1;
	if(s2[2]=='D' || s2[2]=='F') w2=1;
	
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<"1";
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			cout<<"1";
			if(w1==w2) 
			{
				cout<<"1";
				if(w1) cout<<"1";
				else
				{
					if((s1[2]=='A' && s2[2]=='C') || (s1[2]=='C' && s2[2]=='A')) cout<<"0";
					else cout<<"1";
				}
			}
			else
			{
				cout<<"00";
			}
		}
		else cout<<"000";
	}
	return 0;
}
