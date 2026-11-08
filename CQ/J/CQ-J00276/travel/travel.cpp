#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out ","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		string s3,s4;
		s3=s1[0]+s1[1];
		s4=s2[0]+s2[1];
		if(s3==s4) 
		{
			cout<<"1";
			char a,b;
			a=s1[2];
			b=s2[2];
			if(a=='F'||a=='D')
			{
				if(b=='A'||b=='B'||b=='C')cout<<"00";
				else 
				{
					cout<<"11";
				}
			}
			if(a=='A'||a=='B'||a=='C')
			{
				if(b=='D'||b=='F') cout<<"00";
				else 
				{
					cout<<"1";
					if(a=='A'&&b=='C') cout<<"0";
					else if(a=='C'&&b=='A') cout<<"0";
					else cout<<"1";
				}
			}
		}
		else cout<<"000";
	} 
	else cout<<"0000";
	
	return 0;
 } 
