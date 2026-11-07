#include<iostream>
#include<string>
using namespace std;
bool check(string s1,string s2){
	if(s1[3]=='A'||s1[3]=='B'||s1[3]=='C'){
		if(s2[3]=='A'||s2[3]=='B'||s2[3]=='C'){
			return 1;
		}else{
			return 0;
		}
	}
	if(s1[3]=='D'||s1[3]=='F'){
		if(s2[3]=='D'||s2[3]=='F'){
			return 1;
		}else{
			return 0;
		}
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag1=0,flag2=0,flag3=0,flag4=0;
	if(c1==c2){
		flag1=1;
	}
	if(c1==c2&&s1[1]==s2[1]&&s1[2]==s2[2]){
		flag2=1;
	}
	if(c1==c2&&s1[1]==s2[1]&&s1[2]==s2[2]&&check(s1,s2)){
		flag3=1;
	}
	if(c1==c2&&s1[1]==s2[1]&&s1[2]==s2[2]&&check(s1,s2)&&s1[3]-1==s2[3]||s2[3]-1==s1[3]){
		flag4=1;
	}
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
}
