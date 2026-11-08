#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(rs[0]==xs[0] and rs[1]==xs[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	bool rt=0,xt=0;
	if(rs[2]=='A' or rs[2]=='B' or rs[2]=='C') rt=1;
	if(xs[2]=='A' or xs[2]=='B' or xs[2]=='C') xt=1;
	
	if(xt==rt) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((xs[2]=='A' and rs[2]=='B') or (xs[2]=='B' and rs[2]=='C') or (rs[2]=='A' and xs[2]=='B') or (rs[2]=='B' and xs[2]=='C') or (xs[2]=='D' and rs[2]=='F') or (rs[2]=='D' and xs[2]=='F')) cout<<1;
	else{
		cout<<"0";
		return 0;
	}
	return 0;
}
