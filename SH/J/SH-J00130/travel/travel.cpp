#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="";
	if(c1==c2) ans+='1';
	else ans+='0';
	string rp="",xp="";
	rp=s1[0]+s1[1];
	xp=s2[0]+s2[1];
	if(rp==xp&&c1==c2) ans+='1';
	else ans+='0';
	if(rp==xp&&c1==c2)
	{
		if(s1[2]<='C'&&s2[2]<='C') ans+='1';
		else if(s1[2]>'C'&&s2[2]>'C') ans+='1';
		else ans+='0';
	}
	else ans+='0';
	if(rp==xp&&c1==c2)
	{
		char a=s1[2],b=s2[2];
		if(a>b) swap(a,b);
		if(a=='A'&&b=='B') ans+='1';
		else if(a=='B'&&b=='C') ans+='1';
		else if(a=='D'&&b=='F') ans+='1';
		else ans+='0'; 
	}
	else ans+='0';
	cout<<ans;
	return 0;
 } 
