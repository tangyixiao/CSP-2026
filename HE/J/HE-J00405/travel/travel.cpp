#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool flag=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		flag=true;
		cout<<1;
	}else{
		cout<<0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&flag){
		cout<<1;
	}else{
		flag=false;
		cout<<0;
	}
	if(b[2]=='A'&&d[2]=='B'&&flag||b[2]=='A'&&d[2]=='C'&&flag||b[2]=='B'&&d[2]=='A'&&flag||b[2]=='B'&&d[2]=='C'&&flag||b[2]=='C'&&d[2]=='A'&&flag||b[2]=='C'&&d[2]=='B'&&flag||b[2]=='D'&&d[2]=='E'&&flag||b[2]=='E'&&d[2]=='D'&&flag){
		cout<<1;
	}else{
		flag=false;
		cout<<0;
	}
	if(b[2]=='A'&&d[2]=='B'&&flag||b[2]=='B'&&d[2]=='A'&&flag||b[2]=='B'&&d[2]=='C'&&flag||b[2]=='C'&&d[2]=='B'&&flag||b[2]=='D'&&d[2]=='E'&&flag||b[2]=='E'&&d[2]=='D'&&flag){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
