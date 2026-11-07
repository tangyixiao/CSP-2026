#include<bits/stdc++.h>
using namespace std;
int xlb,xld;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else cout<<0;
	if(b[2]=='A'||b[2]=='B'||b[2]=='C') {
		xlb=1;
	} else {
		xlb=0;
	}
	if(d[2]=='A'||d[2]=='B'||d[2]=='C') {
		xld=1;
	} else {
		xld=0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&a==c) {
		cout<<1;
	} else {
		cout<<0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&(xlb==xld)&&a==c) {
		cout<<1;
	} else {
		cout<<0;
	}
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&(xlb==xld)&&abs(b[2]-d[2])==1) {
		cout<<1;
	} else {
		cout<<0;
	}
	return 0;
}
