#include<bits/stdc++.h>
using namespace std;
struct YSF{
	string che;
}a[12];
string s,t;
int f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	f=1;
	cin>>a[1].che>>s>>a[2].che>>t;
	if(a[1].che==a[2].che&&f==1){
		cout<<1;
	}else{
		cout<<0;
		f=0;
	}
	if(s[0]==t[0]&&s[1]==t[1]&&f==1){
		cout<<1;
	}else{
		cout<<0;
		f=0;
	}
	if((s[2]=='A'||s[2]=='B'||s[2]=='C')&&(t[2]=='A'||t[2]=='B'||t[2]=='C')&&f==1){
		cout<<1;
	}else if(s[2]=='D'&&t[2]=='F'||t[2]=='D'&&s[2]=='F'&&f==1){
		cout<<1;
	}else{
		cout<<0;
		f=0;
	}
	if(abs(s[2]-t[2])==1&&f==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
