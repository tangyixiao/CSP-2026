#include<iostream>
using namespace std;
string s1,s2,s3,s4;
bool b1,b2,b3;
bool lr(char a){
	if(a=='D'||a=='F') return 0;
	return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
		b1=true;
	}else{
		cout<<0;
		b1=false;
	}
	if(b1){
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			cout<<1;
			b2=true;
		}else{
			cout<<0;
			b2=false;
		}
	}else{
		cout<<0;
		b2=false;
	}
	
	char c1,c2;
	c1=s2[2];
	c2=s4[2];
	if(b1&&b2){
		if(lr(c1)==lr(c2)){
			cout<<1;
			b3=1;
		}else {
			cout<<0;
			b3=0;
		}
	}else{
		cout<<0;
		b3=0;
	}
	
	if(c1>c2){
		swap(c1,c2);
	}
	if((c1=='D'&&c2=='F')||(c1=='A'&&c2=='B')||(c1=='B'&&c2=='C')){
		if(b1&&b2&&b3){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	
	return 0;
} 
