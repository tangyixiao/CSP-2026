#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c,d;
	string a,b,r,x;
	cin>>a>>r>>b>>x;
	if(a==b) {
		cout<<1;
		c=(r[0]-48)*10+r[1]-48;
		d=(x[0]-48)*10+x[1]-48;
		if(c==d) {
			cout<<1;
			if(r[2]>='A'&&r[2]<='C') {
				if(x[2]>='A'&&x[2]<='C') {
					cout<<1;
				} else {
					cout<<0;
				}
			} else {
				if(x[2]>='A'&&x[2]<='C') {
					cout<<0;
				} else {
					cout<<1;
				}
			}
		} else {
			cout<<"00";
		}
		if(c!=d) {
			if(r[2]==x[2]) {
				cout<<1;
			} else {
				cout<<0;
			}
		} else {
			if(abs(r[2]-x[2])==1&&!((r[2]=='C'&&x[2]=='D')||(x[2]=='C'&&r[2]=='D'))) {
				cout<<1;
			} else {
				cout<<0;
			}
		}
	} else {
		cout<<"0000";
	}
	return 0;
}
