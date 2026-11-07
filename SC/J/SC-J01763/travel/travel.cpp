#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	if(rc!=xc){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}
	if(rs[0]==xs[0]&&rs[1]==xs[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(rs[2]=='A'){
		if(xs[2]=='B'||xs[2]=='C'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(rs[2]=='B'){
		if(xs[2]=='A'||xs[2]=='C'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(rs[2]=='C'){
		if(xs[2]=='B'||xs[2]=='A'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(rs[2]=='D'){
		if(xs[2]=='F'){
			cout<<11;
			return 0;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(rs[2]=='F'){
		if(xs[2]=='D'){
			cout<<11;
			return 0;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(rs[2]=='A'&&xs[2]=='B'||rs[2]=='B'&&xs[2]=='C'||rs[2]=='C'&&xs[2]=='B'||rs[2]=='B'&&xs[2]=='A'){
		cout<<1;
		return 0;
	}else{
		cout<<0;
	}
	return 0;
}