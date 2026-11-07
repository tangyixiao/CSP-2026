#include<bits/stdc++.h>
using namespace std;
string c,s,d,t; 
int main(){
	cin>>c>>s>>d>>t;
	if(c[0]==d[0]&&c[1]==d[1]){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s[0]==t[0]&&s[1]==t[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((s[2]=='D'&&t[2]=='F')||(s[2]=='F'&&t[2]=='D')){
		cout<<11;
		return 0;
	}else if(s[2]=='D'||t[2]=='D'||s[2]=='F'||t[2]=='F'){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(s[2]=='B'||t[2]=='B'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}