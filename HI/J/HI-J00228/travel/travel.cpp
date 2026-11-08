#include <bits/stdc++.h>
using namespace std;
int cmp(string s1,string s2){
	if((s1[2]=='A')&&(s2[2]=='B'||s2[2]=='C')){
		return 1;
	}
	if((s1[2]=='B')&&(s2[2]=='C'||s2[2]=='A')){
		return 1;
	}
	if((s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B')){
		return 1;
	}	
	if(s1[2]=='F'&&s2[2]=='D'){
		return 1;
	}
	if(s1[2]=='D'&&s2[2]=='F'){
		return 1;
	}
	return 0;
}
int cmp1(string s1,string s2){
	if(s1[2]=='A'&&s2[2]=='B'){
		return 1;
	}
	if(s1[2]=='B'&&s2[2]=='A'){
		return 1;
	}
	if(s1[2]=='B'&&s2[2]=='C'){
		return 1;
	}
	if(s1[2]=='C'&&s2[2]=='B'){
		return 1;
	}
	if(s1[2]=='D'&&s2[2]=='F'){
		return 1;
	}
	if(s1[2]=='F'&&s2[2]=='D'){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cc1,cc2;
	string ss1,ss2;
	cin>>cc1>>ss1>>cc2>>ss2;
	int f1=0,f2=0,f3=0,f4=0;
	if(cc1==cc2){
		f1=1;
	}
	if(cc1==cc2&&ss1[0]==ss2[0]&&ss1[1]==ss2[1]){
		f2=1;
	}
	if((cc1==cc2&&ss1[0]==ss2[0]&&ss1[1]==ss2[1])&&cmp(ss1,ss2)==1){
		f3=1;
	}
	if((cc1==cc2&&ss1[0]==ss2[0]&&ss1[1]==ss2[1])&&cmp(ss1,ss2)==1&&cmp1(ss1,ss2)==1){
		f4=1;
	}	
	if(f1==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(f2==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(f3==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(f4==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
