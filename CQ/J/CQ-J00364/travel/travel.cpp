#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
void check(string);
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2) ans+='1';
	else
	{
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]==s2[0] && s1[1]==s2[1]) ans+='1';
	else
	{
		cout<<ans<<"000";
		return 0;
	}
	
	if(s1[2]<='C' && s2[2]<='C') ans+='1';
	else if(s1[2]<='C' || s2[2]<='C')
	{
		cout<<ans<<"00";
		return 0;
	}
	else ans+='1'; 
	
	if(s1[2]<='C' && s2[2]<='C') 
	{
		if(abs(s1[2]-s2[2])==1) ans+='1';
		else ans+='0';
	}
	else if(s1[2]<='C' || s2[2]<='C') ans+='0';
	else ans+='1'; 
	
	cout<<ans;
}
