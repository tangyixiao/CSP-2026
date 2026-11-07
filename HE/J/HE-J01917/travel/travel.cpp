#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	char r1,r2,r3,x1,x2,x3;
	cin>>r>>r1>>r2>>r3>>x>>x1>>x2>>x3;
	if(r==x){
	cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(r1==x1 && r2==x2){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if((r3=='A' || r3=='B'||r3=='C') && (x3=='A' || x3=='B'||x3=='C') ){
	cout<<1;
	}else if((r3=='D' ||r3=='E') &&(x3=='E' ||x3=='D')){
	cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(r3=='A'&&x3=='B'){
		cout<<1;
	}else if(r3=='B'&&x3=='A'){
		cout<<1;
	}else if(r3=='B'&&x3=='C'){
		cout<<1;
	}else if(r3=='C'&&x3=='B'){
		cout<<1;
	}else if(r3=='D'&&x3=='F'){
		cout<<1;
	}else if(r3=='F'&&x3=='D'){
		cout<<1;
	}else{
	cout<<0;
}
	return 0;
	
}
