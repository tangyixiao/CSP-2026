#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	string a[4];
	cin>>s1>>c1>>s2>>c2;
	if(s1==s2&&(s1!="01"&&s1!="16")&&(s2!="01"&&s2!="16")) {
		a[0]='1';
	}
	else {
		a[0]='0';
	}
	if (c1[1]=c2[1]&&s1==s2&&(s1!="01"&&s1!="16")&&(s2!="01"&&s2!="16")) {
		a[1]='1';
	}
	else {
		a[1]='0';
	}
	if (c1[1]=c2[1]&&(((c1[2]<='C'&&c1[2]>='A')&&(c2[2]<='C'&&c2[2]>='A'))||((c1[2]<='E'&&c1[2]>='D')&&(c2[2]<='E'&&c2[2]>='D')))) {
		a[2]='1';
	}
	else {
		a[2]='0';
	}
	if ((((c1[2]<='C'&&c1[2]>='A')&&(c2[2]<='C'&&c2[2]>='A'))||((c1[2]<='E'&&c1[2]>='D')&&(c2[2]<='E'&&c2[2]>='D')))&&(c1[2]-1=c2[2]||c2[2]-1=c1[2])) {
		a[3]='1';
	}
	else {
		a[3]='0';
	}
	for (int i=0;i<4;i++) {
		cout << a[i];
	}
	return 0;
}
