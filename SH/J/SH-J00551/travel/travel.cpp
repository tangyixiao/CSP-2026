#include<bits/stdc++.h>
using namespace std;
bool cx(string s,string s2){
	for(int i=0;i<2;i++){
		if(s[i]!=s2[i]){
			return 0;
		}
	}
	return 1;
}
bool yp(int s4,int s5){
	if(s4==s5){
		return 1;
	}
	return 0;
}
bool sc(char s6,char s7){
	if(s6>='A' && s6<='C' && s7>='A' && s7<='C'){
		return 1;
	}
	if((s6=='D' || s6=='F') && (s7=='D' || s7=='F')){
		return 1;
	}
	return 0;
}
bool yb(char s6,char s7){
	if(s6=='A' && s7=='B' || s6=='B' && s7=='C' || s7=='A' && s6=='B' || s7=='B' && s6=='C'){
		return 1;
	}
	if((s6=='D' || s6=='F') && (s7=='D' || s7=='F')){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int s4,s5;
	string s,s1,s2,s3;
	char s6,s7;
	cin>>s>>s1>>s2>>s3;
	s4=(int(s1[0])-48)*10+(int(s1[1])-48);
	s6=s1[2];
	s5=(int(s3[0])-48)*10+(int(s3[1])-48);
	s7=s3[2];
	if(cx(s,s2)==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(yp(s4,s5)==1 && cx(s,s2)==1){
		cout<<1;
	} 
	else{
		cout<<0;
	}
	if(yp(s4,s5)==1 && sc(s6,s7)==1 && cx(s,s2)==1){
		cout<<1;
	} 
	else{
		cout<<0;
	}
	if(yp(s4,s5)==1 && sc(s6,s7)==1 && yb(s6,s7)==1 && cx(s,s2)==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
