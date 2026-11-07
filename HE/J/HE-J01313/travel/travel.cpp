#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1,a2,b2;
	string a,b;
	cin>>a1>>a>>b1>>b;
	a2=(a[0]-'0')*10+(a[1]-'0');
	b2=(b[0]-'0')*10+(b[1]-'0');
	if(a1==b1){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a2==b2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((a[3]>='A'&&a[3]<='C'&&b[3]>='A'&&b[3]<='C')||(a[3]>='D'&&a[3]<='F'&&b[3]>='D'&&b[3]<='F')){
		cout<<1;
	}else{
		cout<<"00";
	}
	if(a[3]=='F'){
		a[3]='E';
	}
	if(b[3]=='F'){
		b[3]='E';
	}
	if(int(a[3]-b[3])==1||int(a[3]-b[3])==-1){
		cout<<1;
	}else{
		cout<<0;
		return 0; 
	}
	return 0;
} 
