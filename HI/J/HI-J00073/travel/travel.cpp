#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,t,k,v;
	cin>>s>>t>>k>>v;
	bool j=true;
	if(s==k){
		cout<<1;
	}
	else{
		j=false;
		cout<<0;
	}
	bool o=true;
	string u=t.substr(0,2);
	string p=v.substr(0,2);

	if(u==p&&j)cout<<1;
	else{
		cout<<0;
		o=false;
	}
	bool n=true;
	if(((t[2]>='A'&&t[2]<='C')&&(v[2]>='A'&&v[2]<='C'))&&j&&o){
		cout<<1;
	}
	else if(((t[2]=='D'||t[2]=='F')&&(v[2]=='D'&&v[2]<='F'))&&o){
		cout<<1;
	}
	else{
		n=false;
		cout<<0;
	}
	if((t[2]=='D'||t[2]=='F')&&(v[2]=='D'||v[2]=='F')&&n)cout<<1;
	else if((t[2]=='C'||t[2]=='D')&&(v[2]=='C'||v[2]=='D')&&n)cout<<0;
	else if(((t[2]==(char)v[2]+1)||((char)t[2]+1==v[2]))&&n)cout<<1;
	else cout<<0;
	return 0;
}
