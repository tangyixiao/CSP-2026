#include<bits/stdc++.h>
using namespace std;
string s[4],l,k;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	if(s[1]==s[3]){
	cout<<'1';	
	string h="";
	string p="";
	h+=s[2][0];
	h+=s[2][1];
	p+=s[4][0];
	p+=s[4][1];
	
	if(h==p){
	cout<<'1';	
	if(s[2][2]<='C'){
		if(s[4][2]<='C')cout<<'1';
		else{
		cout<<"00";
		return 0;	
		}
	}
	else if(s[2][2]>'C'){
		if(s[4][2]=='D'||s[4][2]=='F')cout<<'1';
		else {
		cout<<"00";	
		return 0;	
		}
	}	
	
	if(s[2][2]=='C'){
		if(s[4][2]=='B')cout<<'1';
		else cout<<'0';
	}	
	
	else if(s[2][2]=='D'){
		if(s[4][2]=='F')cout<<'1';
		else cout<<'0';
	}
	else if(s[2][2]=='F'){
		if(s[4][2]=='D')cout<<'1';
		else cout<<'0';
	}
	
	else{
		if(s[2][2]-s[4][2]==1||s[2][2]-s[4][2]==-1)cout<<'1';
		else cout<<'0';
	}
	}
	
	else{
		cout<<"000";
	}
	}
	else cout<<"0000";
	return 0;
}
