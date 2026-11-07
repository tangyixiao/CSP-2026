#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s >> s1 >>s2>>s3;
	if(s==s2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	char c1,c2,c3,c4,c5,c6;
	c1=s1[0];
	c2=s1[1];
	c3=s3[0];
	c4=s3[1];
	if(c1==c3&&c2==c4){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	c5=s1[2];
	c6=s3[2];
	if((c5>='D'&&c6>='D') || (c5<'D'&&c6<'D')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(c6-c5==-1 || c6-c5==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 