#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else if(c1!=c2)
	{
		cout<<"0000";
		exit(0);
	} 
	
	if(s1[0]==s2[0] && s1[1]==s2[1])
	{
		cout<<1;
	}
	else 
	{
		cout<<"000";
		exit(0);
	}
	
	if( (s1[2]-'A'+1 >3 && s2[2]-'A'+1>3)  ||( s1[2]-'A'+1<=3 && s2[2]-'A'+1<=3) )
	{
		cout<<1;
	}
	else 
	{
		cout<<"00";
		exit(0);
	}
	
	if(  abs( (s1[2]-'A'+1) -(s2[2]-'A'+1) ) ==1 )
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	
	return 0;
}

