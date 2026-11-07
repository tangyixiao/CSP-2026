#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool check(){
	char x=s2[2],y=s4[2];
	if((x=='A'&&y=='C')||(x=='C'&&y=='A')) return 0;
	if(x==y) return 0;
	return 1;
}
bool judge(){
	char a=s2[2],b=s4[2];
	if(a=='A'&&(b=='D'||b=='E')) return 0;
	if(a=='B'&&(b=='D'||b=='E')) return 0;
	if(a=='C'&&(b=='D'||b=='E')) return 0;
	if(b=='A'&&(a=='D'||a=='E')) return 0;
	if(b=='B'&&(a=='D'||a=='E')) return 0;
	if(b=='C'&&(a=='D'||a=='E')) return 0;
	return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)cout<<1;
	else{cout<<"0000";return 0;}
	
	if(s2[0]==s4[0]&&s2[1]==s4[1]) cout<<1;
	else {cout<<"000";return 0;}
	
	if(judge()) cout<<1; 
	else{cout<<"00";return 0;}
	
	if(check()) cout<<1;
	else cout<<0;
	return 0;
}
