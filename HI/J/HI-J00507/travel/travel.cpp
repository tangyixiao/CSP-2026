#include <bits/stdc++.h>
using namespace std;
signed main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]+b[1]==d[0]+d[1]){
			cout<<"1";
			if(b[2]<'D' && d[2]<'D' || b[2]>'C' && d[2]>'C'){
				cout<<"1";
				if(int(b[2]+d[2])!=132) cout<<"1";
				else cout<<"0";
			}
			else cout<<"00"; 
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
