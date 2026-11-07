#include<bits/stdc++.h>
using namespace std;
freopen"travel.in"stdin;
freopen"travel.out"stdout;
int main(){
	string t1,s1,t2,s2;
	int b=0;
	cin>>t1>>s1>>t2>>s2;
	if(t1==t2&&t1!='01'&&t1!='16'){
		cout<<"1"<<" ";
	}
	else cout<<"0"<<" ";
	if(s1[0]*10+s1[1]==s2[0]*10+s2[1]){
		cout<<"1"<<" ";
	}
	else cout<<"0"<<" ";
	if((s2[2]=='D'&&s1[2]=='C')||(s2[2]=='C'&&s1[2]=='D')){
		cout<<"1"<<" ";
	}
	else cout<<"0"<<" ";
	if(int(s1[2])-int(s2[2])==1||int(s2[2])-int(s1[2])==1){
		cout<<"1"<<" ";
	}
	else cout<<"0"<<" ";
	return 0;
} 