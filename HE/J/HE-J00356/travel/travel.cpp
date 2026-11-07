#include<bits/stdc++.h>
using namespace std;
string s,ss,sss,ssss,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s;
	cin>>ss;
	cin>>sss;
	cin>>ssss;
	if(s==sss){
		ans+='1';
	}else{
		cout<<"0000";
		return 0;
	}
	int x,y;
	char c,cc;
	x=ss[0]*10+ss[1];
	c=ss[2];
	y=ssss[0]*10+ssss[1];
	cc=ssss[2];
	if(x==y){
		ans+='1';
	}else{
		cout<<"1000";
		return 0;
	}
	if(c=='A'||c=='B'||c=='C'){
		if(cc=='A'||cc=='B'||cc=='C'){
			ans+='1';
		}else{
			cout<<"1100";
			return 0;
		}
	}
	if(c=='D'||c=='F'){
		if(cc=='D'||cc=='F'){
			cout<<"1111";
			return 0;
		}else{
			cout<<"1110";
			return 0;
		}
	}
	if(c=='B'||cc=='B') ans+='1';
	else ans+='0';
	cout<<ans;
	return 0;
} 
