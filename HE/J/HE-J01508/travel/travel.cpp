#include <bits/stdc++.h>
using namespace std;
string Rc;
char Rs;
string Xc;
char Xs;
int a,b;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>Rc>>a>>Rs>>Xc>>b>>Xs;
	if(a==b&&Rs!=Xs) {
		if(Rc==Xc) cout<<1;
		else cout<<0;
		if(a=b) cout<<1;
		else cout<<0;
		if(Rs+Xs!='A'+'B'&&Rs+Xs!='B'+'C'&&Rs+Xs!='D'+'F'&&Rs+Xs!='A'+'C')cout<<0;
		else cout<<1;
		if(Rs+Xs=='A'+'B'||Rs+Xs=='B'+'C'||Rs+Xs=='D'+'F') cout<<1;
		else cout<<0;
	}
	return 0;
}
