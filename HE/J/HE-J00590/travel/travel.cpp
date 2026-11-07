#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	string c;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1) {
		c[0]='1';
	} else c[0]='0';

	if(c2[0]==s2[0]&&c2[1]==s2[1]&&c[0]=='1') {
		c[1]='1';

	} else c[1]='0';

	if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C') {
		if(s2[2]!='D'&&s2[2]!='E'&&c[1]=='1')
			c[2]='1';

	} else c[2]='0';
	if(c2[2]=='D'||c2[2]=='E') {
		if(s2[2]!='A'&&s2[2]!='B'&&s2[2]!='C'&&c[1]=='1')
			c[2]='1';

	} else if(c[2]!='1')c[2]='0';
	
	if(c2[2]=='A'&&s2[2]=='B'&&c[2]=='1')c[3]='1';
	else if(c2[2]=='B'&&s2[2]=='A'&&c[2]=='1')c[3]='1';
	else if(c2[2]=='B'&&s2[2]=='C'&&c[2]=='1')c[3]='1';
	else if(c2[2]=='C'&&s2[2]=='B'&&c[2]=='1')c[3]='1';
	else if(c2[2]=='D'&&s2[2]=='E'&&c[2]=='1')c[3]='1';
	else if(c2[2]=='E'&&s2[2]=='D'&&c[2]=='1')c[3]='1';
	else c[3]='0';
		for(int i=0; i<4; i++)
			cout <<c[i];

	return 0;
}
