#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a=0,b=0;
	bool f=true;
	string s1="",s2="",c1="",c2="";
	cin>>c1>>s1>>c2>>s2;
	a=(s1[0]-'0')*10+s1[1]-'0';
	b=(s2[0]-'0')*10+s2[1]-'0';
	if((c1[0]-'0')*10+c1[1]-'0'==(c2[0]-'0')*10+c2[1]-'0'&&f){
		cout<<'1';	
	}
	else{
		cout<<'0';
		f=false;
	} 
	if(a==b&&f){
		cout<<'1';
	}
	else{
		cout<<'0';
		f=false;
	} 
	if(((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))&&f){
		cout<<'1';		
	}
	else{
		cout<<'0';
		f=false;
	} 
	if((((s1[2]-'A')-(s2[2]-'A')==1||0-(s1[2]-'A')+(s2[2]-'A')==1)||((s1[2]=='F'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='F')))&&f) cout<<'1';
	else{
		cout<<'0';
		f=false;
	} 
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
