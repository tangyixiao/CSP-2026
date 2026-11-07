#include<bits/stdc++.h>
using namespace std;
string s;
string c;
string k;
string f;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>c>>k>>f;
	if(s==k) {
		cout<<1;
		if((10*c[1]-'0'+(c[0]-'0'))==(10*f[1]-'0'+(f[0]-'0'))) {
			cout<<1;
			if(c[2]<='C'&&f[2]<='C') {
				cout<<1;

				if((char(c[2]+1)==f[2])||(char(c[2])==char(f[2]+1))) {
					cout<<1;
				}
			} else if((c[2])>'C'&&(f[2])>'C') {
				cout<<1;
				if((char(c[2]+1)==f[2])||(char(c[2])==char(f[2]+1))) {
					cout<<1;
				} else cout<<0;
			}else cout<<0<<0;
		} else cout<<0<<0<<0;
	} else {
		cout<<0<<0<<0<<0;
	}
}
