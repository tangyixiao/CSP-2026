#include<iostream>
#include<cstdio> 
using ll=long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ll a,b,d,e;
	char c,f;
	std::cin>>a>>b>>c>>d>>e>>f;
	if(a==d){
		std::cout<<1;
	}
	else{
		std::cout<<"0000";
		return 0;
	}
	if(b==e){
		std::cout<<1;
	}
	else{
		std::cout<<"000";
		return 0;
	}
	if(((c=='A'||c=='B'||c=='C')&&(f=='A'||f=='B'||f=='C'))||((c=='D'||c=='F')&&(f=='D'||f=='F'))){
		std::cout<<1;
	}else{
		std::cout<<"00";
		return 0;
	}
	if(c>f){
		char t=c;
		c=f;
		f=t;
	}
	if((c=='A'&&f=='B')||(c=='B'&&f=='C')||(c=='D'&&f=='F')){
		std::cout<<1;
	}else{
		std::cout<<0;
	}
	return 0;
}
