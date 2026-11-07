#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char cr1[5],cr2[5],cx1[5],cx2[5];
	int r1=0,r2=0,x1=0,x2=0,r3=0,x3=0;
	for(int i=1;i<=2;i++){
		cin>>cr1[i];
		r1=r1*10+(cr1[i]-'0');
	}
	for(int i=1;i<=3;i++){
		cin>>cr2[i];
		if(i!=3){
			r2=r2*10+(cr2[i]-'0');	
		}else{
			r3=cr2[i]-'A';
		}
	}
	for(int i=1;i<=2;i++){
		cin>>cx1[i];
		x1=x1*10+(cx1[i]-'0');
	}
	for(int i=1;i<=3;i++){
		cin>>cx2[i];
		if(i!=3){
			x2=x2*10+(cx2[i]-'0');	
		}else{
			x3=cx2[i]-'A';
		}
	} 
	if(r1==x1){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(r2==x2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(x3+r3==8){
		cout<<"11";
		return 0;
	}else if(r3==3||r3==4||x3==3||x3==4){
		cout<<"00";
		return 0;
	}else if(abs(x3-r3)==1){
		cout<<"11";
		return 0;
	}else{
		cout<<"10";
	}
	return 0;
} 