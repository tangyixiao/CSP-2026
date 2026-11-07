#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string sc1,ss1,sc2,ss2;
int c1=0,sn1=0;
char st1;
int c2=0,sn2=0;
char st2;
int cf(string& s){
	return (s[0]-'0')*10+s[1]-'0';
}
char stf(string& s){
	return s[2];
}
int snf(string& s){
	return (s[0]-'0')*10+s[1]-'0';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>sc1>>ss1>>sc2>>ss2;
	c1=cf(sc1); sn1=snf(ss1); st1=stf(ss1);
	c2=cf(sc2); sn2=snf(ss2); st2=stf(ss2);
	
	if(c1==c2) cout<<1;
	else cout<<0;
	
	if(c1==c2 && sn1==sn2) cout<<1;
	else cout<<0;
	
	if(c1==c2 && sn1==sn2 &&((st1>='A' && st1<='C' && st2>='A' && st2<='C')||((st1=='D' || st1=='F')&&(st2=='D' || st2=='F')))){
		cout<<1;
		if((st1=='D' || st1=='F')){
			cout<<1;
		}
		else if(st1>='A' && st1<='C'){
			if(abs(st1-st2)==1) cout<<1;
			else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0<<0;
	
	return 0;
}