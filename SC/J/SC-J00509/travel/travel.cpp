#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int l1,l2,p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>l1>>s1>>l2>>s2;
	if(l1==l2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	p1=(s1[0]-'0')*10+s1[1]-'0';
	p2=(s2[0]-'0')*10+s2[1]-'0';
	if(l1==l2&&p1==p2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(l1==l2&&p1==p2&&( (s1[2]<='C'&&s2[2]<='C') || (s1[2]>='D'&&s2[2]>='D') ) ){
		cout<<1;
	}
	else{
		cout<<0;
	}
	char c1=s1[2],c2=s2[2];
	if(c1=='F')c1='E';
	if(c2=='F')c2='E';
	if(l1==l2&&p1==p2&&( (s1[2]<='C'&&s2[2]<='C') || (s1[2]>='D'&&s2[2]>='D') ) &&abs(c1-c2)==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}