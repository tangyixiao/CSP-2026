#include<bits/stdc++.h>
using namespace std;
int c1,c2,a=1,b=1,c=1,d=1;
string s1,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		a=0;
		b=0;
		c=0;
		d=0;
	}
	if(s1[0]!=s2[0] || s1[1]!=s2[1]){
		b=0;
		c=0;
		d=0;
	}
	if(s1[2]>'C'){
		if(s2[2]<='C'){
			c=0;
			d=0;
		}
	}
	else{
		if(s2[2]>'C'){
			c=0;
			d=0;
		}
		else{
			if(s1[2]=='A' && s2[2]=='C') d=0;
			else if(s1[2]=='C' && s2[2]=='A') d=0;
		}
	}
	cout<<a<<b<<c<<d;
	return 0
} 
