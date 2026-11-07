#include<bits/stdc++.h>
using namespace std;
int f1,f2,f3,f4;
char num,num2;
string c,s,c2,s2,r,r2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c2>>s2;
	r="";
	r+=s[0];
	r+=s[1];
	r2="";
	r2+=s2[0];
	r2+=s2[1];
	num=s[2];
	num2=s2[2];
	if(c==c2){
		cout<<1;
		f1=1;
	}else{
		cout<<0;
		f1=0;
	}
	if(f1){
		if(r==r2){
			cout<<1;
			f2=1;
			if(num2>='A'&&num2<='C'&&num>='A'&&num2<='C'){
				cout<<1;
				f3=1;
			}else if((num2=='D'||num2=='F')&&(num=='D'||num=='F')){
				cout<<1;
				f3=1;
			}else{
				f3=0;
				cout<<0;
			}
		}else{
			f2=f3=0;
			cout<<0;
			cout<<0;
		}
		if(f1&&f2&&f3){
			if(num=='A'&&num2=='B'){
				cout<<1;
			}else if(num2=='A'&&num=='B'){
				cout<<1;
			}else if(num2=='A'&&num=='B'){
				cout<<1;
			}else if(num=='B'&&num2=='C'){
				cout<<1;
			}else if(num2=='B'&&num=='C'){
				cout<<1;
			}else if(num=='D'&&num2=='F'){
				cout<<1;
			}else if(num2=='D'&&num=='F'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
				cout<<0;
			}
	}else{
		cout<<0<<0<<0;
	}
	cout<<" "<<endl; 
	return 0;
}
