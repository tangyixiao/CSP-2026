#include<bits/stdc++.h>
using namespace std;
bool bj,bj1,bj2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		bj=1;
	}else{
		cout<<0;
	}
	string s3="",s4="";
	s3=s3+s1[0]+s1[1];
	s4=s4+s2[0]+s2[1];
	if(s3==s4&&bj==1){
		cout<<1;
		bj1=1;
	}else{
		cout<<0;
	}
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
		if(bj1==1){
			cout<<1;
			bj2=1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	//cout<<s1[2]<<s2[2];
	if(abs(s1[2]-s2[2])==1&&bj2==1){
		cout<<1;
	}else{
		cout<<0;
	}
}