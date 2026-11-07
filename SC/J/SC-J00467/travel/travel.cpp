#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	bool t=0;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<"1";
		string s5="",s6="";
		s5+=s2[0];
		s5+=s2[1];
		s6+=s4[0];
		s6+=s4[1];
		if(s5==s6){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if((s2[2]<='C'&&s4[2]<='C')||(s2[2]>='D'&&s4[2]>='D')){
			cout<<"1";
			t=1;
		}else{
			cout<<"0";
			t=0;
		}
		if(t){
			if((s2[2]-s4[2])==1||(s2[2]-s4[2])==-1){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
