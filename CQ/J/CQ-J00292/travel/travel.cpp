#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	n="";
	m="";
	if(a[1]!='2' || c[1]!='2')cout<<"0000";
	else {
		cout<<"1";
		n+=b[0];
		n+=b[1];
		m+=d[0];
		m+=d[1];
		if(n!=m)cout<<"000";
		else {
		cout<<"1";
		char s=b[2];
		char t=d[2];
		if((s>='A' && s<='c' && t>='D' && t<='F') || (t>='A' && t<='c' && s>='D' && s<='F')){
			cout<<"00";
		}else {
			cout<<"1";
		if((s=='D' && t=='F') || (t=='D' && s=='F') || (s=='A' && t=='B') || (s=='B' && t=='A') || (s=='B' && t=='C') || (s=='C' && t=='B')){
			cout<<"1";
		}
		else cout<<"0";
		}
	}
	}
	return 0;
} 
