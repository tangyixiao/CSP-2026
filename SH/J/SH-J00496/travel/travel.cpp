#include<bits/stdc++.h>
using namespace std;
string s,s1,t,t1,ss,tt;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>t>>t1;
	if(s==t) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	ss=s1.substr(0,2);
	tt=t1.substr(0,2);
	if(ss==tt) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	int a=(int)s1[2];
	int b=(int)t1[2];
	a-=64;
	b-=64;
	if((a<=3&&b<=3)||(a>3&&b>3)){
		cout<<"1";
		if(abs(a-b)==1) cout<<"1";
		else cout<<"0";
	}
	else{
		cout<<"00";
	}
	return 0;
}
