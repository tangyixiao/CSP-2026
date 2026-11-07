#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool f1=0,f2=0,f3=0,f4=0;
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	
	//判断1情况
	
	if(s1==s3){
		f1=1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	
	//判断2情况
	
	if(s2[0]==s4[0] && s2[1]==s4[1]){
		f2=1;
	}
	else{
		cout<<"1000";
		return 0;
	}
	
	//判断3情况
	
	if(s2[2]>='A' && s2[2]<='C' && s4[2]>='A' && s4[2]<='C' || s2[2]>='D' && s2[2]<='F' && s4[2]>='D' && s4[2]<='F'){
		f3=1;
	}
	else{
		cout<<"1100";
		return 0;
	}
	
	//判断4情况
	
	//当在AC之间时
	if(s2[2]>='A' && s2[2]<='C' && s4[2]>='A' && s4[2]<='C'){
		if(abs(s2[2]-s4[2])==1){
			f4=1;
			
		}
		else {
			cout<<"1110";
			return 0;
		}
	}
	
	//当在DF之间时
	else if(s2[2]>='D' && s2[2]<='F' && s4[2]>='D' && s4[2]<='F'){
		if(abs(s2[2]-s4[2])==2){
			f4=1;
			
		}
		else {
			cout<<"1110";
			return 0;
		}
	}
	
	cout<<"1111";
	return 0;
}