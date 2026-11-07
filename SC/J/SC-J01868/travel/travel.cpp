#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	bool flag1=true,flag2=true;
	string s1,s2;
	cin>>a>>s1>>b>>s2;
	if(a==b) cout<<1;
	else{
		cout<<0;
		flag2=false;
	} 
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&flag2) cout<<1;
	else{
		cout<<0;
		flag1=false;
	} 
	if((s1[0]==s2[0]&&s1[1]==s2[1])&&(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
		if(flag2) cout<<1;
		else cout<<0;
	} 
	else cout<<0;
	if((s1[2]==s2[2]+1||s1[2]==s2[2]-1)&&(!((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')))||((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))){
		if(flag1) cout<<1;
		else cout<<0;
	} 
	else cout<<0;
	return 0;
}