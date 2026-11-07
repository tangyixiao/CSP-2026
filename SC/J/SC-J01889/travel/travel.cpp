#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c_,s_;
	cin>>c>>s>>c_>>s_;
	if(c[0]==c_[0]&&c[1]==c_[1]){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s[0]==s_[0]&&s[1]==s_[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	if((s[2]=='A'&&s_[2]=='B')||(s[2]=='A'&&s_[2]=='C')||(s[2]=='B'&&s_[2]=='C')||(s_[2]=='A'&&s[2]=='B')||(s_[2]=='A'&&s[2]=='C')||(s_[2]=='B'&&s[2]=='C')||(s[2]=='D'&&s_[2]=='F')||(s_[2]=='D'&&s[2]=='F')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if((s[2]=='A'&&s_[2]=='B')||(s[2]=='B'&&s_[2]=='C')||(s_[2]=='A'&&s[2]=='B')||(s_[2]=='B'&&s[2]=='C')||(s[2]=='D'&&s_[2]=='F')||(s_[2]=='D'&&s[2]=='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}