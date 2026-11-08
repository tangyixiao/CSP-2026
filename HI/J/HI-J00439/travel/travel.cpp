#include <bits/stdc++.h>
using namespace std;
string s1,s2,x1,x2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>x1>>x2;
	bool f=1;
	for(int i=0; i<2; i++) {
		if(s1[i]!=x1[i])f=0;
	}
	if(f)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	f=1;
	for(int i=0; i<2; i++) {
		if(s2[i]!=x2[i])f=0;
	}
	if(f)cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if('A'<=s2[2]&&s2[2]<='C'&&'A'<=x2[2]&&x2[2]<='C')cout<<1;
	else if('D'<=s2[2]&&s2[2]<='F'&&'D'<=x2[2]&&x2[2]<='F')cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	f=0;
	if(s2[2]+1==x2[2]||s2[2]-1==x2[2]) {
		if(('D'!=s2[2]&&x2[2]!='C')||(x2[2]!='D'&&s2[2]!='C'))f=1;
	}
	if(f)cout<<1;
	else cout<<0;
	return 0;
}
