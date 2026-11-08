#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	if(c==cc){cout<<"1";}
	else{cout<<"0";}
	if(c==cc && s[0]==ss[0] && s[1]==ss[1]){cout<<"1";}
	else{cout<<"0";}
	int mjmjmj=0;
	if(s[2]=='A' || s[2]=='B' || s[2]=='C'){
		if(c==cc && s[0]==ss[0] && s[1]==ss[1] && (ss[2]=='A' || ss[2]=='B' || ss[2]=='C')){
			cout<<"1";mjmjmj=1;
		}else{
			cout<<"0";
		}
	}else{
		if(c==cc && s[0]==ss[0] && s[1]==ss[1] && (ss[2]=='D' || ss[2]=='F')){
			cout<<"1";mjmjmj=2;
		}else{
			cout<<"0";
		}
	}
	if(mjmjmj==2){cout<<"1";}
	else if(mjmjmj==1 && (s[2]=='B' || ss[2]=='B')){cout<<"1";}
	else{cout<<"0";}
	return 0;
} 
