#include<bits/stdc++.h>
using namespace std;
#define int long long
string xr,sr,xx,sx;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>xr>>sr>>xx>>sx;
	if(xr!=xx) cout<<"0000";
	else{
		if(sr[0]!=sx[0]||sr[1]!=sx[1]) cout<<"1000";
		else{
			int a,b;
			if(sr[2]<='C') a=1;
			else a=0;
			if(sx[2]<='C') b=1;
			else b=0;
			if(a^b) cout<<"1100";
			else{
				int d=sr[2]-sx[2];
				if(abs(d)==1) cout<<"1111";
				else cout<<"1110";
			}
		}
	}
}
