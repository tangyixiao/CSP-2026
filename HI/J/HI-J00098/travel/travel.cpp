#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string b,d,n,m;
	char x,y;
	int a,c;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(b[1]==d[1]&&b[0]==d[0]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	x=b[2];
	y=d[2];
	if(x=='A'&&y=='B'||x=='A'&&y=='C'||x=='B'&&y=='A'||x=='B'&&y=='C'||x=='C'&&y=='B'||x=='C'&&y=='A'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(x=='A'&&y=='B'){
		cout<<1;
	}
	else if(x=='B'&&y=='A'||x=='B'&&y=='C'){
		cout<<1;
	}
	else if(x=='C'&&y=='B'){
		cout<<1;
	}
	else if(x=='D'&&y=='F'){
		cout<<1;
	}
	else if(x=='F'&&y=='D'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
