#include<bits/stdc++.h>
using namespace std;
bool a1=0,a2=0;
string s1,c1,s2,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A' or s1[2]=='B' or s1[2]=='C')
	{
		a1=1;
	}
	if(s2[2]=='A' or s2[2]=='B' or s2[2]=='C')
	{
		a2=1;
	}
	if(c1==c2)
	{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<"1";
			if(a1==a2)
			{
				cout<<"1";
				if((s1[2]=='A'&&s2[2]=='B')or(s1[2]=='B'&&s2[2]=='A')or(s1[2]=='B'&&s2[2]=='C')or(s1[2]=='C'&&s2[2]=='B')or(s1[2]=='D'&&s2[2]=='F')or(s1[2]=='F'&&s2[2]=='D'))
				{
					cout<<"1";
				}
				else
					cout<<"0";
			}
			else
				cout<<"00";
			
		}
		else
			cout<<"000";
		
		
	}
	else
	{
		cout<<"0000";
	}
	return 0;
} 
