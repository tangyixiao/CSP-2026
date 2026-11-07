#include<bits/stdc++.h>
using namespace std;
int rc,xc,rp,xp;
char l1,l2;
string c1,s1,c2,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0; i<c1.length(); i++) {
		rc*=10;
		rc+=c1[i]-'0';
	}
	for(int i=0; i<s1.length()-1; i++) {
		rp*=10;
		rp+=s1[i];
	}
	for(int i=0; i<s2.length()-1; i++) {
		xp*=10;
		xp+=s2[i];
	}
	for(int i=0; i<c2.length(); i++) {
		xc*=10;
		xc+=c2[i]-'0';
	}
	l1=s1[2];
	l2=s2[2];
	if(rc==xc) {
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(rc==xc&&rp==xp) {
		cout<<"1";
	}else{
		cout<<"0";
	}
	if((rc==xc&&rp==xp)&&(l1<='C'&&l2<='C')||(l1>'C'&&l2>'C')){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if((rc==xc&&rp==xp)&&(l1-l2==1||l1-l2==-1)&&((l1!='D'&&l2!='C')&&(l1!='C'&&l2!='D'))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}