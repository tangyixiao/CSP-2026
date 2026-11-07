#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
struct per{
	int x,y;
}r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc!=xc){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}
	r.x=(rs[0]-'0')*10+(rs[1]-'0');
	x.x=(xs[0]-'0')*10+(xs[1]-'0');
	if(r.x==x.x)cout<<1;else cout<<0;
	if(rs[2]>='A'&&rs[2]<='C'){
		r.y=rs[2];/*
		cout<<"\nrs[2]>='A'||rs[2]<='C'\n";
		cout<<"rs[2]="<<rs[2]<<'='<<(int)rs[2]<<'\n';*/
	}else if(rs[2]=='D'){
		r.y=69;
	}else r.y=70;
	if(xs[2]>='A'&&xs[2]<='C'){
		x.y=xs[2];/*
		cout<<"\nxs[2]>='A'||xs[2]<='C'\n";
		cout<<"xs[2]="<<xs[2]<<'='<<(int)xs[2]<<'\n';*/
	}else if(xs[2]=='D'){
		x.y=69;
	}else x.y=70;
	if(r.x==x.x){
		if(r.y>='A'
		&&r.y<='C'
		&&x.y>='A'
		&&x.y<='C')
		cout<<1;
		else if(r.y<='F'
		&&r.y>='D'
		&&x.y<='F'
		&&x.y>='D')
		cout<<1;
		else cout<<0;
	}else cout<<0;
	for(int i=0;i<4;++i){
		int nx=r.x+dx[i];
		int ny=r.y+dy[i];
		if(nx<1||ny<1)continue;
		if(nx==x.x&&ny==x.y){
			cout<<1;
			goto a;
		}
	}
	cout<<0;
	a:
	//cout<<'\n'<<"debug::"<<r.x<<' '<<r.y<<' '<<x.x<<' '<<x.y;
	return 0;
}
