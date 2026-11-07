#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool p(char a,char b){
	if(b<a)swap(a,b);
	if(a=='A'&&b=='B')return true;
	if(a=='B'&&b=='C')return true;
	if(a=='D'&&b=='F')return true;
	return false;
}
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_c,x_c,zr,zx;
	cin>>r_c>>zr>>x_c>>zx;
	ll rc,xc,r,x;
	rc=ll(r_c[0]-'0')*10+ll(r_c[1]-'0');
	xc=ll(x_c[0]-'0')*10+ll(x_c[1]-'0');
	r=ll(zr[0]-'0')*10+ll(zr[1]-'0');
	x=ll(zx[0]-'0')*10+ll(zx[1]-'0');
	char xx,rx;
	xx=zr[2],rx=zx[2];
	bool f=(rc==xc);
	if(f){cout<<1;f&=(r==x);}
	else cout<<0;
	if(f){cout<<1;f&=((xx<='C'&&rx<='C')||(xx>='D'&&rx>='D'));}
	else cout<<0;
	if(f){cout<<1;f&=p(xx,rx);}
	else cout<<0;
	if(f){cout<<1;}
	else cout<<0;
	return 0;
}