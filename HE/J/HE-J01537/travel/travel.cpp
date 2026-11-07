#include<bits/stdc++.h>
using namespace std;

long long co,ct,zo,zt;
char zho,zht;


bool tp(char a,char b){
	if(((a=='D') && (b=='F')) || ((a=='F') && (b=='D')))return 1;
	if(a=='A')if(b=='B' || b=='C')return 1;
	if(a=='B')if(b=='A' || b=='C')return 1;
	if(a=='C')if(b=='B' || b=='A')return 1;
	return 0;
}


bool pb(char a,char b){
	if(((a=='D') && (b=='F')) || ((a=='F') && (b=='D')))return 1;
	if(a=='A')if(b=='B')return 1;
	if(a=='B')if(b=='A' || b=='C')return 1;
	if(a=='C')if(b=='B')return 1;
	return 0;
}


main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>co>>zo>>zho>>ct>>zt>>zht;
	
	if(co==ct)cout<<1;else cout<<0;
	if(co==ct && zo==zt)cout<<1;else cout<<0;
	if(co==ct && zo==zt && tp(zho,zht))cout<<1;else cout<<0;
	if(co==ct && zo==zt && pb(zho,zht))cout<<1;else cout<<0;
	return 0;
}
