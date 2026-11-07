#include<bits/stdc++.h>
using namespace std;
string cx1,cx2,zwh1,zwh2;
int a,b,t=10;
char c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx1>>zwh1>>cx2>>zwh2;
	if(cx1==cx2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		a+=(zwh1[i]-'0')*t;
		b+=(zwh2[i]-'0')*t;
		t/=10;
	}
	if(a==b){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	a=zwh1[2]-'A',b=zwh2[2]-'A';
	if((zwh1[2]>='A'&&zwh1[2]<='C')&&(zwh2[2]>='A'&&zwh2[2]<='C')){
		cout<<"1";
		if(abs(a-b)==1){
			cout<<"1";
			return 0;
		}else{
			cout<<"0";
		}
	}
	else if((zwh1[2]>='D'&&zwh1[2]<='F')&&(zwh2[2]>='D'&&zwh2[2]<='F'))	{
		cout<<"11";
		return 0;
	}
	else{
		cout<<"00";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
