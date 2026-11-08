#include <bits/stdc++.h>
using namespace std;
long long x,y,z;
string a,b,a1,b1;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	if(a==b) {
		x=1;
		cout<<1;
	} else cout<<0;
	if(x==1&&a1[0]==b1[0]&&a1[1]==b1[1]) {
		y=1;
		cout<<1;
	} else cout<<0;
	if(x==1&&y==1) {
		if(a1[2]<='C'&&b1[2]<='C'||a1[2]>='D'&&b1[2]>='D') {
			cout<<1;
			z=1;
		} else cout<<0;
	} else
		cout<<0;
	if(x==1&&y==1&&z==1) {
		if(abs(a1[2]-b1[2])==1||a1[2]=='F'&&b1[2]=='D'||a1[2]=='D'&&b1[2]=='F') {
			cout<<1;
		} else cout<<0;
	} else cout<<0;
	return 0;
}
