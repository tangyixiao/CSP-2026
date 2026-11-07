#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	int xiang1=(s1[0]-'0')*10+s1[1]-'0';
	int xiang2=(s3[0]-'0')*10+s3[1]-'0';
	int pai1=(s2[0]-'0')*10+s2[1]-'0';
	int pai2=(s4[0]-'0')*10+s4[1]-'0';
	char c1=(char)s2[2],c2=(char)s4[2];
	if(xiang1==xiang2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(xiang1==xiang2&&pai1==pai2){
		cout<<1;
	}else{
		cout<<0;
	}
	if((xiang1==xiang2)&&(pai1==pai2)&&((c1<='C'&&c2<='C')||(c1>='D'&&c2>='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	if((xiang1==xiang2)&&(pai1==pai2)&&((c1=='B'&&c2!='D'&&c2!='F')||(c1=='D'&&c2=='F')||(c2=='B'&&c1!='D'&&c1!='F'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
