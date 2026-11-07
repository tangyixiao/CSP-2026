#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	char s1,s2;
	cin>>c1>>c2>>c3>>c4;
	int cs2=c2.size(),cs4=c4.size(),a=0,b=0;
	bool f=false;
	if(c1==c3){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(cs2==3 && cs4==3){
		s1=c2[2],s2=c4[2];
		a=c2[1]-'0';
		b=c4[1]-'0';
		if(a==b){
			cout<<1;
			f=true;
		}else{
			cout<<0;
			f=false;
		}
	}
	if(cs2==4 && cs4==4){
		s1=c2[3],s2=c4[3];
		a=(c2[1]-'0')*10+c2[2]-'0';
		b=(c4[1]-'0')*10+c4[2]-'0';
		if(a==b){
			cout<<1;
			f=true;
		}else {
			cout<<0;
			f=false;
		}
	}
	if(f){
		if((s1=='A'||s1=='B'||s1=='C')&&(s2=='A'||s2=='B'||s2=='C')){
			cout<<1;
		}else if((s1=='D'||s1=='F')&&(s2=='D'||s2=='F')){
			cout<<1;
		}else {
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if((s1=='A'&&s2=='B')||(s1=='B'&&s2=='A')||(s1=='B'&&s2=='C')||(s1=='C'&&s2=='B')||(s1=='D'&&s2=='F')||(s1=='F'&&s2=='D')){
		if(a==b){
			cout<<1;
		}else {
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}
