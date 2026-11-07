#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a,b,c,d,w="";
	int aa,bb,cc,dd;
	char e,f;
	cin>>a>>b>>c>>d;
	aa = (a[0]-'0')*10+a[1]-'0';
	cc = (c[0]-'0')*10+c[1]-'0';
	bb = (b[0]-'0')*10+b[1]-'0';
	dd = (d[0]-'0')*10+d[1]-'0';
	e = b[2];
	f = d[2];
	if(aa==cc) {
		w+="1";	
		if(bb==dd) {
			w+="1";
			if(e=='A'&&f=='B'||e=='B'&&f=='C'||e=='B'&&f=='A'||e=='C'&&f=='B'||e=='E'&&f=='F'||e=='F'&&f=='E') {  
				w+="11";
			}
			else if(e=='A'&&f=='C'||e=='C'&&f=='A') {
				w+="10";
			}
			else {
				w+="00";
			}
		}
		else w+="000";
	} 
	else w+="0000";
	cout<<w;
	return 0;
}
