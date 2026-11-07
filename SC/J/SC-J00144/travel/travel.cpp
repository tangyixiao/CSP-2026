#include<bits/stdc++.h>
using namespace std;
int f=1;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if (a==c){
		cout<<1;
	}
	else{
		f=0;
		cout<<0;
	}
	if (b[0]==d[0] && b[1]==d[1] && f==1){
		cout<<1;
	}
	else {
		f=0;
		cout<<0;
	}
	if ((b[2]<='C' && d[2]<='C') || (b[2]>'C' && d[2]>'C') ){
		if (f==1) cout<<1;
		else cout<<0;
	}
	else {
		f=0;
		cout<<0;
	}
	if (b[2]<='C' && d[2]<='C' && abs(b[2]-d[2])==1 && f==1){
		cout<<1;
	}
	else if (b[2]>'C' && d[2]>'C' && f==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
