#include<bits/stdc++.h>
using namespace std;
#define int long long
char b[6]={'A','B','C'};
char c[6]={'D','F'};
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m,x,y;
	cin>>n>>x>>m>>y;
	int nn=0;
	for(int i=0;i<n.size();i++){
		nn*=10;
		nn+=(n[i]-'0');
	}
	int mm=0;
	for(int i=0;i<m.size();i++){
		mm*=10;
		mm+=(m[i]-'0');
	}
	if(nn==mm)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int xx=0;
	for(int i=0;i<x.size()-1;i++){
		xx*=10;
		xx+=(x[i]-'0');
	}
	int yy=0;
	for(int i=0;i<y.size()-1;i++){
		yy*=10;
		yy+=(y[i]-'0');
	}
	if(xx==yy)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	char ax=x[x.size()-1],ay=y[y.size()-1];
	int ap=0,bp=0;
	for(int i=0;i<3;i++){
		if(b[i]==ax)ap=i+1;
		if(b[i]==ay)bp=i+1;
	}
	if(ap!=0||bp!=0){
		if(ap==0||bp==0){
			cout<<"00";
			return 0;
		}
		cout<<1;
		if(abs(ap-bp)!=1)cout<<0;
		else cout<<1;
		return 0;
	}
	ap=0,bp=0;
	for(int i=0;i<2;i++){
		if(c[i]==ax)ap=i+1;
		if(c[i]==ay)bp=i+1;
	}
	if(ap!=0||bp!=0){
		if(ap==0||bp==0){
			cout<<"00";
			return 0;
		}
		cout<<1;
		if(abs(ap-bp)!=1){
			cout<<0;
		}
		else cout<<1;
	}
	return 0;
} 
/*
CQ-J00352  LUOGU UID:1274525
           Genshin UID:331504998

Trick||Treat!

I don't AK,I am sad,The 4th problem is difficult.
100+100+100+68=368
I except -s in the afternoon.

Da Da Da Da Da.....
*/
