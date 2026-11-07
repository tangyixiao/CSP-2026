#include<bits/stdc++.h>
#define int long long
using namespace std;
string r1,r2,x1,x2;
int x,y,z,k;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>r1>>r2>>x1>>x2;
	for(int i=0;i<r1.size();i++){
		if(r1[i]!=x1[i]) x=1;
	}
	if(x==0) cout<<1;
	else cout<<0;
	for(int i=0;i<2;i++){
		if(r2[i]!=x2[i]) y=1;
	}
	if(x==0&&y==0) cout<<1;
	else cout<<0;
	if((r2[2]=='C'&&x2[2]=='D')||(r2[2]=='D'&&x2[2]=='C')){
		z=1;
	}
	if(x==0&&y==0&&z==0) cout<<1;
	else cout<<0;
	if(abs((r2[2]-'A')-(x2[2]-'A'))!=1) k=1;
	if(x==0&&y==0&&z==0&&k==0) cout<<1;
	else cout<<0;
	return 0;
}