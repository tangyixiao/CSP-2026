#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool a,b,c,d;
	a=(c1==c2);
	b=(a && s1[0]==s2[0]&&s1[1]==s2[1]);
	if (b) {
		c=(s1[2]==s2[2] || (s1[2]<='C'&&s2[2]<='C') || (s1[2]>'C'&&s2[2]>'C'));
	}else {
		c=0;
	}
	if (c) {
		int x=s1[2]-s2[2];
		if (x==1 || x==-1) {
			d=1;
		}else {
			d=0;
		}
	}else {
		d=0;
	}
	cout<<a<<b<<c<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
