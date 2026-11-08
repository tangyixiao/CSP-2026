#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0,c=0,d=0;
	if(c1-'0'==c2-'0')
	{
		a=1;
		c=1;
	}
	if(s1+1==s2 or s1-1==s2) 
	{
		b=1;
		d=1;
	}
	cout<<a<<b<<c<<d;
	return 0;
} 
