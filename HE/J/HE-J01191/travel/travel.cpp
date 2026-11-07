#include<iostream>
using namespace std;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdin);
	int a1,a2;
	string b1,b2;
	cin>>a1>>b1>>a2>>b2;
	bool m=0,n=0,p=0;
	if (a1==a2){
		cout<<1;
		m=1;
	}else{
		cout<<0<<0<<0<<0;
	}
	
	if (m){
		if (b1[0]==b2[0] && b1[1]==b2[1]){
			cout<<1;
			n=1;
		}else{
			cout<<0<<0<<0;
		}
	}
	
	if (n){
		if ((b1[2]>='A' && b1[2]<='C' && b2[2]>='A' && b2[2]<='C') || (b1[2]>='D' && b1[2]<='F' && b2[2]>='D' && b2[2]<='F')){
			cout<<1;
			p=1;
		}else{
			cout<<0<<0;
		}
	}
	
	if (p){
		if (b1[2]=='D' || b2[2]=='D'){
			cout<<1;
		}else if(b1[2]=='B' || b2[2]=='B'){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	return 0;
} 
