#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,c1,c2,s1,s2;
	bool tc1=0,tc2=0,ta=0,tb=0,tc=0,td=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		ta=1;
	}
	else cout<<0;
	if(s1[0]==s2[0] && s1[1]==s2[1] && ta==1){
		cout<<1;
		tb=1;
	}
	else cout<<0;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){
		tc1=1;
	}
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
		tc2=1;
	}
	if(tc1==tc2 && tb==1 && ta==1){
		cout<<1;
		tc=1;
	}
	else cout<<0;
	if((s1[2]-s2[2]==1 || s2[2]-s1[2]==1)) td=1;
	if(ta==1 && tb==1 && tc==1 && td==1)
		cout<<1;
	else cout<<0;
	return 0;
} 
