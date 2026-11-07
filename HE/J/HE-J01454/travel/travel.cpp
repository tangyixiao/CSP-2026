#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int st1,st2,tag;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	st1=((s1[0]-'0')*10)+(s1[1]-'0');
	st2=((s2[0]-'0')*10)+(s2[1]-'0');
	if(c1==c2){
		cout<<"1";
		tag=1;
		if((st1==st2)&&tag==1){
			cout<<"1";
			tag=1;
		}
		else{
			cout<<"0";
			tag=0;
		}
		if(((s1[2]=='A'||s1[2]=='B')&&(s2[2]=='B'||s2[2]=='A'))||((s1[2]=='A'||s1[2]=='C')&&(s2[2]=='C'||s2[2]=='A'))||((s1[2]=='B'||s1[2]=='C')&&(s2[2]=='C'||s2[2]=='B'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='F'||s2[2]=='D'))&&tag==1){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(((s1[2]=='A'||s1[2]=='B')&&(s2[2]=='B'||s2[2]=='A'))||((s1[2]=='B'||s1[2]=='C')&&(s2[2]=='C'||s2[2]=='B'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='F'||s2[2]=='D'))&&tag==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}else{
		cout<<"0000";
		
	}
	
	
	
	
	return 0;
} 
