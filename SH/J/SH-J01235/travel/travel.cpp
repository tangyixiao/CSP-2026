#include<bits/stdc++.h>
using namespace std;
string s,s1,a,a1;
bool check(){
	if((s1[2]>='A'&&s1[2]<='C')&&(a1[2]>='A'&&a1[2]<='C')){
		return 1;
	}if((s1[2]>='D'&&s1[2]<='F'&&a1[2]>='D'&&a1[2]<='F')){
		return 1;
	}return 0;
}
bool check1(){
	if(s1[0]==a1[0]&&s1[1]==a1[1]){
		return 1;
	}
}
bool check2(){
	if(s==a){
		return 1;
	}return 0;
}
bool check3(){
	if((s1[2]=='D'&&a1[2]=='F')||(s1[2]=='F'&&a1[2]=='D')){
		return 1;
	}else{
		if((s1[2]=='D'&&a1[2]!='F')||(a1[2]=='D'&&s1[2]!='F')){
			return 0;
		}if(abs(s1[2]-a1[2])==1){
			return 1;
		}
	}return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>a>>a1;
	if(check2()){
		cout<<1;
	}else{
		cout<<0;
	}if(check2()&&check1()){
		cout<<1;
	}else{
		cout<<0;
	}if(check2()&&check1()&&check()){
		cout<<1;
	}else{
		cout<<0;
	}if(check2()&&check1()&&check()&&check3()){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
