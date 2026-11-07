#include<bits/stdc++.h>
using namespace std;
int a,b;
string a1,b1;
bool flag=0;
bool flag1=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	int q=0,w=0;
	q=(a1[0]-48)*10+(a1[1]-48);
	w=(b1[0]-48)*10+(b1[1]-48);
	if(a==b){
		cout<<1;
		flag1=1;
	}
	else cout<<0;
	if(q==w&&flag1){
		cout<<1;
	}
	else cout<<0;
	if(a1[2]<='C'){
		flag=1;
	}
	if(q==w&&flag1){
		if(flag){
			if(b1[2]<='C'){
				cout<<1;
			}
			else cout<<0;
		}
		else if(b1[2]>'C'){
			cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
	if(q==w&&flag1){
		if(a1[2]=='A'&&b1[2]=='B'){
			cout<<1;
		}
		else if(a1[2]=='B'&&(b1[2]=='C'||b1[2]=='A')){
			cout<<1;
		}
		else if(a1[2]=='C'&&b1[2]=='B'){
			cout<<1;
		}
		else if(a1[2]=='D'&&b1[2]=='E'){
			cout<<1;
		}
		else if(a1[2]=='E'&&b1[2]=='D'){
			cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
	return 0;
}