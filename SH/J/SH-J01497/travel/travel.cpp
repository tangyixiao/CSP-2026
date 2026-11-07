#include<iostream>
#include<cstring>
using namespace std;
int cc(char ch){
	if(ch=='A'||ch=='B'||ch=='C')return 1;
	return 2;
}
bool with(char ch1,char ch2){
	if((ch2-ch1==-1||ch2-ch1==1)&&(!(ch1=='D'&&ch2=='C'))&&(!(ch2=='D'&&ch1=='C')))return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="0000";
	if(c1!=c2){
		cout<<ans;
		return 0;
	} 
	else {
		ans[0]='1';
	}
	if(ans[0]=='1'&&s1[0]==s2[0]&&s1[1]==s2[1]){
		ans[1]='1';
	}
	else {
		ans[1]='0';
		cout<<ans;
		return 0;
	}
	if(ans[1]=='1'&&cc(s1[2])==cc(s2[2])){
		ans[2]='1';
	}
	else {
		ans[2]='0';
		cout<<ans;
		return 0;
	}
	if(ans[2]=='1'&&with(s1[2],s2[2])){
		ans[3]='1';
		cout<<ans;
		return 0;
	}
	cout<<ans;
	return 0;
	
	return 0;
}
