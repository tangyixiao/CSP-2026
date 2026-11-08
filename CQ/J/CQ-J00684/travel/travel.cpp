#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x,ra,xa;
	char q,w;
	cin>>r>>ra>>q>>x>>xa>>w;
	if(w==70){
		w=69;
	}
	if(q==70){
		q=69;
	}
	if(r==x){
		cout<<1;
	}else if(r!=x){
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(ra==xa){
		cout<<1;
	}else if(ra!=xa){
		cout<<0<<0<<0;
		return 0;
	}
	if(65<=q && q<=67 && 65<=w && w<=67){
		cout<<1;
	}else if(68<=q && q<=69 && 68<=w && w<=69){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(q>w && q-1==w){
		cout<<1;
		return 0;
	}else if(w>q && w-1==q){
		cout<<1;
		return 0;
	}
	else{
		cout<<0;
	}
	return 0;
}
