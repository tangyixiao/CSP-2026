#include<bits/stdc++.h>
using namespace std;
string s,s1;
int c,c1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,a1=0,a2=0; 
	cin>>c>>s>>c1>>s1;
	if(c==c1)
	{
		cout<<1;
		a=1;
	}
	else cout<<0;
	if(a&&(s[0]*10+s[1])==(s1[0]*10+s1[1]))
	{
		cout<<1;
		a1=1;
	}
	else cout<<0;
	if(a1&&((s[2]<='C'&&s1[2]<='C')||s[2]>='D'&&s1[2]>='D'))
	{
		cout<<1;
		a2=1;
	}
	else cout<<0;
	if(a2&&(abs(s[2]-s1[2])==1))
	{
		cout<<1;
	}
	else cout<<0;
	return 0; 	
} 
