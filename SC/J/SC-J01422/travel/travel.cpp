#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	string sr,sx;
	cin>>r>>sr>>x>>sx;
	if(r==x) cout<<1;
	else{
		cout<<"0000\n";
		return 0;
	}
	bool f=true;
	for(int i=0;i<2;i++){
		if(sx[i]!=sr[i]) f=false;
	}
	if(f) cout<<1;
	else{
		cout<<"000\n";
		return 0;
	}
	char rrr=sr[2],xxx=sx[2];
	if(((xxx>='A' && xxx<='C') && (rrr>='A' && rrr<='C')) || (xxx=='D' && rrr=='F') || (xxx=='F' && rrr=='D')) cout<<1;
	else{
		cout<<"00\n";
		return 0;
	}
	if(((xxx=='D' && rrr=='F') || (xxx=='F' && rrr=='D')) || (!(xxx=='A' && rrr=='C') && !(xxx=='C' && rrr=='A'))) cout<<1;
	else cout<<0;
	return 0;
}