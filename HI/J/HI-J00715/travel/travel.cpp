#include <bits/stdc++.h>
using namespace std;

string a,b,c,d;

int main() {
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	string x="",y="";
	x=x+b[0]+b[1];
	y=y+d[0]+d[1];
	if(a==c) cout<<1;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	if(a==c && x==y) cout<<1;
	if(a==c && x!=y){
		cout<<"000";
		return 0;
	}
	bool k=true;
	if(a==c && x==y && ((b[2]<='C' && d[2]<='C') || (b[2]>='D' && d[2]>='D'))){
		cout<<1;
		k=false;
	}  
	if(k){
		cout<<"00";
		return 0;
	}
	if((b[2]=='A' && d[2]=='B') || (b[2]=='B' && d[2]=='C') || ((b[2]=='D' && d[2]=='F'))){
		cout<<1;
		return 0;
	}
	cout<<0;
	
	
	return 0;
}
