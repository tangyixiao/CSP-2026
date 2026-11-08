#include <bits/stdc++.h>
using namespace std;
int a,b;
char x[10],y[10];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if (a==b) {
		cout<<1;
		if (x[0]==y[0]&&x[1]==y[1]) {
			cout<<1;
			if ((x[2]<='C'&&y[2]<='C') || (x[2]>'C'&&y[2]>'C')) {
				cout<<1;
				if (abs(int(x[2]-y[2]))==1) cout<<1;
				else cout<<0;
			} else cout<<0<<0;
		} else cout<<0<<0<<0;
	} else cout<<0<<0<<0<<0;
	return 0;
}
