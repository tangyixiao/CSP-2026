#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool flag=false;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	char x=b[2];
	char y=d[2];
	if(x=='A'&&(y=='B'||y=='C')){
		flag=true;
	}else if(x=='B'&&(y=='A'||y=='C')){
		flag=true;
	}else if(x=='C'&&(y=='A'||y=='B')){
		flag=true;
	}else if(x=='D'&&y=='F'){
		flag=true;
	}else if(x=='F'&&y=='D'){
		flag=true;
	}
	if(flag){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	flag=false;
	if(x=='A'&&y=='B'){
		flag=true;
	}else if(x=='B'&&(y=='C'||y=='A')){
		flag=true;
	}else if(x=='D'&&y=='F'){
		flag=true;
	}else if(x=='F'&&y=='D'){
		flag=true;
	}else if(x=='C'&&y=='B'){
		flag=true;
	}
	if(flag){
		cout<<1;
	}else{
		cout<<0;
	}

	return 0;
}
