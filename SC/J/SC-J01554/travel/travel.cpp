#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)) cout<<1;
	else cout<<0;
	int a=s1.back(),b=s2.back();
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)) {
		if( a<=67&& b<=67) {
			cout<<1;
			if(abs(a-b)==1) cout<<1;
			else cout<<0;
		} else if( a>=68&& b>=68) {
		cout<<1;
			if(abs(a-b)==1) cout<<1;
			else cout<<0;
		}
		else cout<<0<<0;
		return 0;
	}
	cout<<0<<0;


	return 0;
}