//travel
#include<bits/stdc++.h>
using namespace std;

string rc, rs, xc, xs;
char s[]={'A','B','C'};

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc) cout<<1;
	else {cout<<0<<0<<0<<0; return 0;}
	
	if(rs[0]==xs[0] && rs[1]==xs[1]) cout<<1;
	else {cout<<0<<0<<0; return 0;}
	
	bool fr=false, fx=false;
	for(int i=0; i<3; i++) {
		if(s[i]==rs[2]) fr=true;
		if(s[i]==xs[2]) fx=true;
	}
	if(fr==fx) cout<<1;
	else {cout<<0<<0; return 0;}
	
	if(fr==false && fx==false) cout<<1;
	else {
		if(rs[2]=='A' && xs[2]=='B'){
			cout<<1;
		} else if(rs[2]=='B' && xs[2]=='A'){
			cout<<1;
		} else if(rs[2]=='B' && xs[2]=='C'){
			cout<<1;
		} else if(rs[2]=='C' && xs[2]=='B'){
			cout<<1;
		} else {
			cout<<0;
		}
	}
	
	return 0;
}