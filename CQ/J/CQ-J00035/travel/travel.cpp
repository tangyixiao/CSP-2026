#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c2,s2;
	cin>>c>>s>>c2>>s2;
	if(c==c2){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s[0]==s2[0]&&s[1]==s2[1]){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(s[2]<='C'&&s2[2]<='C'){
		cout<<1;
	}else if(s[2]>='D'&&s2[2]>='D'){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(abs(s[2]-s2[2])==1){
		cout<<1;
	}else if(abs(s[2]-s2[2])==2){
		if(s[2]=='D'&&s2[2]=='F'){
			cout<<1; 
		}else if(s[2]=='F'&&s2[2]=='D'){
			cout<<1; 
		}
	}else{
		cout<<0;
	}
	return 0;
}

