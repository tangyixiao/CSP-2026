#include<bits/stdc++.h>
using namespace std;
string che_one,zuo_one,che_two,zuo_two;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>che_one>>zuo_one>>che_two>>zuo_two;
	bool o=1;
	for(int i=0;i<=1;i++){
		if(che_one[i]!=che_two[i]){
			o=0;
			break;
		}
	}
	if(!o){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	bool e=1;
	for(int i=0;i<=1;i++){
		if(zuo_one[i]!=zuo_two[i]){
			e=0;
			break;
		}
	}
	if(!e){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	bool c=1;
	char p_one=zuo_one[2],p_two=zuo_two[2];
	if(((p_one=='A'||p_one=='B'||p_one=='C')&&(p_two=='D'||p_two=='E'))||((p_one=='D'||p_one=='E')&&(p_two=='A'||p_two=='B'||p_two=='C'))){
		c=0;
	}
	if(!c){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	bool u=1;
	if((p_one=='A'&&p_two!='B')||(p_one=='B'&&p_two!='A'&&p_two!='C')||(p_one=='C'&&p_two!='B')||(p_one=='D'&&p_two!='F')||(p_one=='F'&&p_two!='D')){
		u=0;
	}
	if(!u){
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
} 
