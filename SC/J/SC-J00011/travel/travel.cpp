#include<bits/stdc++.h>
using namespace std;
int a,b;
string c1,c2;
string s1,s2,s3,s5,s7;
char s4,s6;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.size();i++) {
		if(i<2) {
			s3=s3+s1[i];
		} else {
			s4=s1[i];
		}
	}
	for(int i=0;i<s2.size();i++) {
		if(i<2) {
			s5=s5+s2[i];
		} else {
			s6=s2[i];
		}
	}
	if(c1==c2) {
		s7=s7+"1";
	} else {
		cout<<"0000";
		return 0;
	}
	if(s3==s5) {
			s7=s7+"1";
	} else {
			s7=s7+"0";
	}
	if((s4<=67&&s6<=67)||(s4>67&&s6>67)) {
		if(s3==s5) {
			s7=s7+"1";
		} else {
			s7=s7+"0";
		}
	} else {
		s7=s7+"0";
	}
	a=int(s4)-int(s6);
	b=int(s6)-int(s4);
	if(s3==s5&&(a==1||b==1)) {
		if((s4=='C'&&s6=='D')||(s4=='D'&&s6=='C')) {
			s7=s7+"0";
		} else {
			s7=s7+"1";
		}
	} else {
		s7=s7+"0";
	}
	cout<<s7;
	return 0;
} 