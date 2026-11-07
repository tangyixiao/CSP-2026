#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{
		cout<<0;
			cout<<0;
				cout<<0;
					cout<<0;
		return 0;
	}
    string q="";
	string w="";
	for(int i=0;i<2;i++){
		q+=b[i];
		w+=d[i];
	}
	if(q==w){
		cout<<1;
	}else{
		cout<<0;
			cout<<0;
				cout<<0;
		return 0;
	}
	char p=b[2];
	char o=d[2];
	int t=0,y=0;
	if(p=='A' || p=='B' || p=='C'){
		t=1;
	}
	if(o=='A' || o=='B' || o=='C'){
		y=1;
	}
	
	if(t==y){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		return 0;
	}
	int z,x;
	if(p=='A'){
		z=1;
	}
	if(p=='B'){
		z=2;
	}
	if(p=='C'){
		z=3;
	}
	if(p=='D'){
		z=4;
	}
	if(p=='F'){
		z=5;
	}
	if(o=='A'){
		x=1;
	}
	if(o=='B'){
		x=2;
	}
	if(o=='C'){
		x=3;
	}
	if(o=='D'){
		x=4;
	}
	if(o=='F'){
		x=5;
	}
	if(z-x==1 ||x-z==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
