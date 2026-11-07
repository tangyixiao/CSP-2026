#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string h;
int a2,b2,a3,b3;
void f(int i){
	int a4=s1[2]-'0',b4=s2[2]-'0';
	if((a4-b4==1||a4-b4==-1)&&(a4!=20&&b4!=20)){
		h[3]='1';
	}
	else if((a4==20&&b4==22)||(b4==20&&a4==22)){
		h[3]='1';
	}
	else{
		h[3]='0';
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a2=c1[0]*10+c1[1];
	b2=c2[0]*10+c2[1];
	a3=s1[0]*10+s1[1];
	b3=s2[0]*10+s2[1];
	if(a2==b2){
		h[0]='1';
		if(a3==b3){
			h[1]='1';
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')){
				h[2]='1';
				f(2);
			}
			else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
				h[2]='1';
				f(2);
			}
			else{
				h[2]='0';
				h[3]='0';
			}
		}
		else{
			h[1]='0';
			h[2]='0';
			h[3]='0';
		}
	}
	else{
		for(int i=0;i<4;i++){
			h[i]='0';
		}
	}
	for(int i=0;i<4;i++){
		cout<<h[i];
	}
	return 0;
}
