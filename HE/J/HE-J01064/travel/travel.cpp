#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int bbbj=1;
	if(a==c)cout<<1;
	else {
		cout<<0;
		bbbj=0;
	}
	int bbj=1;
	if(b.substr(0,2)==d.substr(0,2)&&bbbj)cout<<1;
	else {
		cout<<0;
		bbj=0;
	}
	int bj=1;
	if((b[2]=='D'&&d[2]!='F')||(b[2]=='F'&&d[2]!='D')||(d[2]=='D'&&b[2]!='F')||(d[2]=='F'&&b[2]!='D'))bj=0;
	if(b.substr(0,1)==d.substr(0,1)&&bj&&bbj&&bbbj)cout<<1;
	else cout<<0;
	if(abs(b[2]-d[2])==1&&bj&&bbj&&bbbj)cout<<1;
	else cout<<0;
	return 0;
} 
