#include<bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
signed main(){
	ios::sync_with_stdio(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
		if(c[0]==d[0] && c[1]==d[1]) {
			cout<<1;
			if((c[2]<='C'&& d[2]<='C') || (d[2]>'C' && c[2]>'C')) {
				cout<<1;
				if(c[2]-d[2]=='A'-'B' || c[2]-d[2]=='B'-'A') cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	} 
	else cout<<"0000";
}