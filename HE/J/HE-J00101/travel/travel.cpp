#include<bits/stdc++.h>
using namespace std;
bool f,f1,f2,f3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		f=1;
	}
	char zm=s2[2],zm1=s4[2];
	string ss,ss1;
	ss+=s2[0];
	ss+=s2[1];
	ss1+=s4[0];
	ss1+=s4[1];
	if(f){
		if(ss==ss1){
			f1=1;
		}
	}
	if(f1){
		if(zm>='A'&&zm<='C'&&zm1>='A'&&zm1<='C'||zm>='D'&&zm<='F'&&zm1>='D'&&zm1<='F'){
			f2=1;
		}
	}
	if(f2){
		if(abs(zm-zm1)==1){
			f3=1;
		}
	}
	cout<<f<<f1<<f2<<f3;
	return 0;
} 
