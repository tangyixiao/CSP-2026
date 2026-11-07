#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,ccr,cx,ccx;
	cin>>cr>>ccr>>cx>>ccx;
	if(cr==cx) {
		cout<<"1";
		if(ccr[0]==ccx[0] && ccr[1]==ccx[1]){
			cout<<"1";
			int x,y;
			if(ccr[2]=='A' || ccr[2]=='B' || ccr[2]=='C') x=1;
			else x=2;
			if(ccx[2]=='A' || ccx[2]=='B' || ccx[2]=='C') y=1;
			else y=2;
			if(x==y){
				cout<<"1";
				if(x==1){
					int a=int(ccr[2]),b=int(ccx[2]);
					a=abs(a-b);
					if(a==1) cout<<"1";
					else cout<<"0"; 
				} else cout<<"1";
			} else cout<<"00";
		} else cout<<"000";
	} else cout<<"0000";
	return 0; 
}
 
