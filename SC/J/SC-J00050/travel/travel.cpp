#include<bits/stdc++.h>
using namespace std;

bool check(char x,char y){
	if((x<='C'&&y>='D')||(x>='D'&&y<='C')){
		return 0;
	}
	else{
		return  true;
	}
}
bool checkk(char x,char y){
	if(x=='A'){
		if(y=='B'){
			return 1;
		}
	}
	if(x=='B'){
		if(y=='A'){
			return 1;
		}
		if(y=='C'){
			return 1;
		}
	}
	if(x=='C'){
		if(y=='B'){
			return 1;
		}
	}
	if(x=='D'){
		if(y=='F'){
			return 1;
		}
	}
	if(x=='F'){
		if(y=='D'){
			return 1;
		}
	}
	return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char e,f;
	cin>>a>>b>>e>>c>>d>>f;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	if(b!=d){
		cout<<"1000";
		return 0;
	}
	if(check(e,f)==0){
		cout<<"1100";
		return 0;
	}
	if(check(e,f)==0){
		cout<<"1100";
		return 0;
	}
	if(checkk(e,f)==0){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 