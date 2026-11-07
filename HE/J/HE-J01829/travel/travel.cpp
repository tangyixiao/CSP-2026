#include<bits/stdc++.h>
using namespace std;
    int a=1,b=1,c=1,d=1;
    int r,x,n1,m1;
    char n[12],m[12];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&r,n+1,&x,m+1);
	if(n[3]=='A') n1=1;
	if(n[3]=='B') n1=2;
	if(n[3]=='C') n1=3;
	if(n[3]=='D') n1=5;
	if(n[3]=='F') n1=6;
	if(m[3]=='A') m1=1;
	if(m[3]=='B') m1=2;
	if(m[3]=='C') m1=3;
	if(m[3]=='D') m1=5;
	if(n[3]=='F') m1=6;
	if(r!=x){
	cout<<"0000";
	return 0;
	}
	if(n[1]!=m[1] || n[2]!=m[2]){
	cout<<"1000";
	return 0;
	}
	if((n1<4 && m1>4) || (n1>4 && m1<4)){
	cout<<"1100";
	return 0;
	}
	if(n1+1!=m1 && m1+1!=n1){
	cout<<"1110";
	return 0;
	}
	else{
	cout<<"1111";
	}
	return 0;
}
