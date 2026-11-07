#include<bits/stdc++.h>
using namespace std;
	string a;
	string b;
	string c;
	string d;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(b[1]==d[1]){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(b[2]=='A'&&(d[2]=='B'||d[2]=='C')){
		cout<<1;
	}
	else if(b[2]=='B'&&(d[2]=='A'||d[2]=='C')){
		cout<<1;
	}
	else if(b[2]=='C'&&(d[2]=='A'||d[2]=='B')){
		cout<<1;
	}
	else if(b[2]=='E'&&d[2]=='D'){
		cout<<1;
	}
	else if(b[2]=='D'&&d[2]=='E'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((b[2]==d[2]+1||b[2]==d[2]-1)&&!(b[2]=='C'&&d[2]=='D')&&!(d[2]=='C'&&b[2]=='D')){
		cout<<1;
	}
	else cout<<0;
} 
