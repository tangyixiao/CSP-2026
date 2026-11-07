#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1.substr(0,2)==s2.substr(0,2)){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	char r=s1[2],j=s2[2];
	if((r=='D'&&j=='F')||(r=='F'&&j=='D')){
		cout<<1;
	}else if((r=='A'&&j=='B')||(r=='B'&&j=='A')){
		cout<<1;
	}else if((r=='B'&&j=='C')||(r=='C'&&j=='B')){
		cout<<1;
	}else if((r=='A'&&j=='C')||(r=='C'&&j=='A')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if((r=='D'&&j=='F')||(r=='F'&&j=='D')){
		cout<<1;
	}else if((r=='A'&&j=='B')||(r=='B'&&j=='A')){
		cout<<1;
	}else if((r=='B'&&j=='C')||(r=='C'&&j=='B')){
		cout<<1;
	}else{
		cout<<0;
	}	
	return 0;
} 