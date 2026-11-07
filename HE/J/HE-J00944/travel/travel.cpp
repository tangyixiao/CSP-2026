#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel1.in","r",stdin);
freopen("travel1.out","w",stdout);
	string s1,s3,s2,s4;
	cin>>s1>>s3>>s2>>s4;
	if(s1==s2){
		cout<<"1";
		if(s3[0]==s4[0]&&s3[1]==s4[1]){
			cout<<"1";
		}else{
			cout<<"0";
		}
		char c,c1;
		c=s3[2],c1=s4[2];
		if(c-c1==1||c1-c==1){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(c!='C'&&c1&'D'){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0000";
	}
fclose(stdin);
fclose(stdout);
	return 0;
}
