#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int e=0,f=0,g=0;
	if(a==c && a!="01" && a!="17" && c!="01" && c!="17"){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(b[0]==d[0] && b[1]==d[1]){
		cout<<1;
		f=1;
	}
	else{
		cout<<0;
	}
	if((((b[2]=='A' || b[2]=='B' || b[2]=='C') && (d[2]=='A' || d[2]=='B' || d[2]=='C')) || ((b[2]=='D' || b[2]=='F') && (d[2]=='D' || d[2]=='F')) && (b[0]==d[0] && b[1]==b[1])) && f==1){
		cout<<1;
		e=1;
	}
	else{
		cout<<0;
	}
	if((b[2]+1==d[2] || b[2]-1==d[2]) && e==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	return 0;
} 
