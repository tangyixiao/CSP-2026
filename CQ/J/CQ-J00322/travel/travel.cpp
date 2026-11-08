#include<bits/stdc++.h>
using namespace std;
string s11,s12,s21,s22;
int a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s11>>s12>>s21>>s22;
	if(s11!=s21){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s12[0]=='0') a=s12[1]-'0';
	else a=s12[1]-'0'+10;
	if(s22[0]=='0') b=s22[1]-'0';
	else b=s22[1]-'0'+10;
	if(a!=b){
		cout<<"000";
		return 0;
	}
	cout<<1;
	char c1=s12[2],c2=s22[2];
	if(c1<='C'&&c2<='C') cout<<1;
	else if(c1>='D'&&c2>='D') cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if((c1=='D'&&c2=='F')||(c1=='F'&&c2=='D')) cout<<1;
	else {
		if(c1=='B'||c2=='B') cout<<1;
		else cout<<0;
	}	
	return 0;
} 
