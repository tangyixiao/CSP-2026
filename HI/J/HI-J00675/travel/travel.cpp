#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a,b,c,d=0;
	
	if(c1[0]==c2[0]&&c1[1]==c2[1]) a=1;
	else{
		a=0;
	} 
	if(a==1){
		if(s1[0]==s2[0]&&s1[1]==s2[1]) b=1;
		else {
			b=0;
		}
		if(b==1){
			if(s1[2]<='C'&&s2[2]<='C') c=1;
			else if(s1[2]>'C'&&s2[2]>'C') c=1;
			else c=0;
		}
		else{
			c=0;
			d=0;
			cout<<a<<b<<c<<d;
			return 0;
		}
		if(c==1){
			if(s1[2]=='C'&&s2[2]=='D') d=0;
			else if(s1[2]=='D'&&s2[2]=='C') d=0;
			else if(s1[2]==s2[2]-1||s1[2]==s2[2]+1) d=1;
			else d=0;
		}
		else {
			d=0;
			cout<<a<<b<<c<<d;
			return 0;
		}
	}
	else{
		b=0;
		c=0;
		d=0;
		cout<<a<<b<<c<<d;
		return 0;
}
	cout<<a<<b<<c<<d;

	
	
	
	
	return 0;
}
