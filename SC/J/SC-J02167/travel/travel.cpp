#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string sc,sz,sc1,sz1;
	cin>>sc>>sz>>sc1>>sz1;
	if(sc==sc1){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(sz[0]==sz1[0] && sz1[1]==sz[1]){
		cout<<1;
	}else {
		cout<<"000";
		return 0;
	}
	if((sz[2]>='D' && sz1[2]>='D') || (sz[2]<='C' && sz1[2]<='C')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	} 
	if(abs(sz[2]-sz1[2])<=1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 