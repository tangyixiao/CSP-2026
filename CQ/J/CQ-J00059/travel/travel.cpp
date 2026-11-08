#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
	}else cout<<0;
	if((s2[0]==s4[0]&&s2[1]==s4[1])&&s1==s3){
		cout<<1;
	}else cout<<0;
	if((s4[3]<='C'&&s2[3]<='C'&&s2[3]>='A'&&s4[3]>='A')||(s2[3]=='D'&&s4[3]=='F')||(s2[3]=='F'&&s4[3]=='F')){
		cout<<1;
	}else cout<<0;
	if( (s4[3]<='C'&&s2[3]<='C'&&s2[3]>='A'&&s4[3]>='A')||(s2[3]=='D'&&s4[3]=='F')||(s2[3]=='F'&&s4[3]=='F') && (int)( abs (s2[3]-s4[3]) ) ){
		cout<<1;
	}else cout<<0;
	return 0;
} 
