#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	int a=0,b=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){cout<<"1";
	}else{cout<<"0000";return 0;}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){cout<<"1";
	}else{cout<<"000";return 0;}
	if(s2[2]=='A') b=1;
	if(s2[2]=='B') b=2;
	if(s2[2]=='C') b=3;
	if(s2[2]=='D') b=4;
	if(s2[2]=='F') b=5;	
	if(s1[2]=='A') a=1;
	if(s1[2]=='B') a=2;
	if(s1[2]=='C') a=3;
	if(s1[2]=='D') a=4;
	if(s1[2]=='F') a=5;
	if(a>=4&&b>=4) {cout<<"11";return 0;}
	else if(a<=3&&b<=3){ cout<<"1";}else{cout<<"00";}
	if(abs(a-b)==1){ cout<<"1";}else{cout<<"0";
	}

	return 0; 
} 
