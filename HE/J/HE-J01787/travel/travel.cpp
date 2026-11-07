#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,b=0;
	string c="",d="",e="",f="";
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<'1';
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		e+=c[i];
		f+=d[i];
	}
	if(e==f){
		cout<<'1';
	}else{
		cout<<"000";
		return 0;
	}
	char y=c[2],x=d[2];
	bool k=0,z=0;
	if(y=='A'||y=='B'||y=='C') k=1;
	if(x=='A'||x=='B'||x=='C') z=1;
	if(k==z){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(k==0&&z==0){
		cout<<1;
		return 0;
	}
	if(y=='A'&&x=='C'){
		cout<<0;
		return 0;
	}else if(y=='C'&&x=='A'){
		cout<<0;
		return 0;
	}else{
		cout<<1;
		return 0;
	}
	return 0;
} 
