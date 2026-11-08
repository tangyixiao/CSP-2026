#include<bits/stdc++.h>
using namespace std;
string s,st,s2,st2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>st>>s2>>st2;
	if(s==s2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(st[0]==st2[0]&&st[1]==st2[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((st[2]<='C'&&st2[2]<='C')||(st[2]>'C'&&st2[2]>'C')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(st[2]<st2[2]){
		if(int(st2[2]-st[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(st[2]>st2[2]){
		if(int(st[2]-st2[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
} 
