#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string che1,che2,zuo1,zuo2;
	int zuo3=0,zuo4=0,bj1=0,bj2=0,bj3=0;
	char zuo5,zuo6;
	cin>>che1>>zuo1>>che2>>zuo2;
	if(che1==che2){
		cout<<1;
		bj1=1;
	}else cout<<0;
	for(int i=0;i<zuo1.size();i++){
		if(isdigit(zuo1[i])){
			zuo3=zuo3*10+zuo1[i];
		}else{
			zuo5=zuo1[i];
		}
	}
	for(int i=0;i<zuo2.size();i++){
		if(isdigit(zuo2[i])){
			zuo4=zuo4*10+zuo2[i];
		}else{
			zuo6=zuo2[i];
		}
	}
	if(zuo3==zuo4&&bj1==1){
		cout<<1;
		bj2=1;
	}else cout<<0;
	if((((zuo5=='B'||zuo5=='A'||zuo5=='C')&&(zuo6=='B'||zuo6=='A'||zuo6=='C'))||((zuo5=='D'||zuo5=='F')&&(zuo6=='D'||zuo6=='F')))&&bj2==1){
		cout<<1;
		bj3=1;
	}else cout<<0;
	if(bj3==1&&(zuo5-zuo6==1||zuo5-zuo6==-1)&&(zuo5!='C'&&zuo5!='D')&&(zuo6!='C'&&zuo6!='D')){
		cout<<1;
	}else cout<<0;
	return 0;
}