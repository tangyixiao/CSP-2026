#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c[2],s[2];
	cin>>c[0]>>s[0]>>c[1]>>s[1];
	string dx,dy;
	dx+=s[0][0];
	dx+=s[0][1];
	dy+=s[1][0];
	dy+=s[1][1];
	if(c[0]==c[1]){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(dx==dy){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if((s[0][2]>='A' && s[0][2]<='C' && s[1][2]>='A' && s[1][2]<='C') || s[0][2]>='D' && s[0][2]<='F' && s[1][2]>='D' && s[1][2]<='F'){
		cout<<1;
	}
	else{
		cout<<0<<0;
		return 0;
	}
	if((s[0][2]+1==s[1][2] || s[0][2]-1==s[1][2]) || (s[0][2]=='D' && s[1][2]=='F') || s[0][2]=='F' && s[1][2]=='D'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
