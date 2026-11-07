#include<bits/stdc++.h>
using namespace std;  
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<1;
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[1]==s2[1])
		cout<<1;
	else
	{
		cout<<0<<0<<0;
		return 0;
	}
	if((s1[2]>='D'&&s2[2]>='D')||(s1[2]<='C'&&s2[2]<='C'))
		cout<<1;
	else
	{
		cout<<0<<0;
		return 0;
	}
	if(s1[2]>='D'&&s2[2]>='D')
	{
		cout<<1;
		return 0;
	}
	else
	{
		if(abs(s1[2]-s2[2])==1)
			cout<<1;
		else
			cout<<0;
	}
	return 0;
}