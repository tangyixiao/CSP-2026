#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(rs[0]==xs[0]&&rs[1]==xs[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(rs[0]==xs[0]&&rs[1]==xs[1]){
		if(rs[2]=='A'||rs[2]=='B'||rs[2]=='C'){
			if(xs[2]=='A'||xs[2]=='B'||xs[2]=='C'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			if(xs[2]=='A'||xs[2]=='B'||xs[2]=='C'){
				cout<<0;
			}
			else{
				cout<<1;
			}
		}
	}
	else{
		cout<<0;
	}
	if(rs[0]==xs[0]&&rs[1]==xs[1]){
		if(rs[2]=='A'){
			if(xs[2]=='B'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else if(rs[2]=='B'){
			if(xs[2]=='A'||xs[2]=='C'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else if(rs[2]=='C'){
			if(xs[2]=='B'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else if(rs[2]=='D'){
			if(xs[2]=='F'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else if(rs[2]=='F'){
			if(xs[2]=='D'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0;
	}
	return 0;
}