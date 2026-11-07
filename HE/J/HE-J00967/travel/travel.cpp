#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	int a1=0,a2=0,a3=0,a4=0;
	int c1=0,c2=0,c3=0,c4=0;
	cin>>s1>>s2>>s3>>s4;
	int len1=s1.size();
	for(int i=0; i<len1; i++) {
		a1=a1*10+(s1[i]-'0');
	}
	int len2=s3.size();
	for(int i=0; i<len2; i++) {
		a2=a2*10+(s3[i]-'0');
	}
	if(a1==a2) {
		c1=1;
		cout<<1;
	} else {
		c1=0;
		cout<<0;
	}
	int len3=s2.size();
	for(int i=0; i<len3-1; i++) {
		a3=a3*10+(s2[i]-'0');
	}
	int len4=s4.size();
	for(int i=0; i<len4-1; i++) {
		a4=a4*10+(s4[i]-'0');
	}
	if(c1==1) {
		if(a3==a4) {
			c2=1;
			cout<<1;
		} else {
			c2=0;
			cout<<0;
		}
	} else cout<<0;
	char ce1=s2[2];
	char ce2=s4[2];
	if(c2==1) {
		if(ce1>='A'&&ce1<='C') {
			if(ce2>='A'&&ce2<='C') {
				cout<<1;
			} else {
				cout<<0;
			}
		} else if(ce1=='D'||ce1=='F') {
			if(ce2=='D'||ce2=='F') {
				cout<<1;
			} else {
				cout<<0;
			}
		}
	} else cout<<0;

	if(c2==1) {
		if(ce1=='A') {
			if(ce2=='B')cout<<1;
			else cout<<0;
		} else if(ce1=='B') {
			if(ce2=='A'||ce2=='C')cout<<1;
			else cout<<0;
		} else if(ce1=='C') {
			if(ce2=='B')cout<<1;
			else cout<<0;
		} else if(ce1=='D') {
			if(ce2=='F')cout<<1;
			else cout<<0;
		} else if(ce1=='F') {
			if(ce2=='D')cout<<1;
			else cout<<0;
		}
	} else cout<<0;

	return 0;
}
//Trick||Treat!
