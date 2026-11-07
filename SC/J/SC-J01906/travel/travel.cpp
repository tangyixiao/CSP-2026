#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char ans[10];
bool flag=1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] && c1[1]==c2[1]) ans[0]='1';
	else 
	{
		ans[0]='0';
		flag=0;
	}
	
	
	if(s1[0]==s2[0] && s1[1]==s2[1] && flag) ans[1]='1';
	else 
	{
		ans[1]='0';
		flag=0;
	}
	
	
	if(s1[2]<='C')
	{
		if(s2[2]<='C' && flag) ans[2]='1';
		else 
		{
			ans[2]='0';
			flag=0;
		}
	}	
	else 
	{
		if(s2[2]>'C' && flag) ans[2]='1';
		else 
		{
			ans[2]='0';
			flag=0;
		}
	}	
	if(abs(s2[2]-s1[2])==1 && flag) ans[3]='1';
	else 
	{
		if(s1[2]=='F' || s2[2]=='F')
			if(s1[2]=='D' || s2[2]=='D')ans[3]='1';
		else ans[3]='0';
	}
	
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	
}




