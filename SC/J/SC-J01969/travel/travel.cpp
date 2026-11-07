#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b,c,d;
int cnta,cntc,cntb,cntd;
int cntb0,cntd0;
bool laze;
int get(int l,int r,string s){
	int sum=1,ans=0;
	for(int i=r-1;i>=l;i--){
		ans+=(s[i]-'0')*sum;
		sum*=10;
	}
	return ans;
}
int getA(int l,string s){
	int ans=0;
	ans=s[l]-'A';
	return ans+1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	cnta=get(0,a.size(),a);
	cntb=get(0,b.size()-1,b);
	cntc=get(0,c.size(),c);
	cntd=get(0,d.size()-1,d);
	if(cnta==cntc) cout<<1,laze=true;
	else cout<<0<<0<<0<<0,laze=false;
	if(laze==1) {
		if(cntb==cntd)cout<<1,laze=1;
		else cout<<0<<0<<0,laze=0;
	}
	cntb0=getA(b.size()-1,b);
	cntd0=getA(d.size()-1,d);
	if(laze==1){
		if(cntb0==4&&cntd0==5) cout<<1,laze=1;
		else if(cntb0==5&&cntd0==4) cout<<1,laze=1;
		else if(cntb0==1&&cntd0==2) cout<<1,laze=1;
		else if(cntb0==1&&cntd0==3) cout<<1,laze=1;
		else if(cntb0==2&&cntd0==3) cout<<1,laze=1;
		else if(cntb0==2&&cntd0==1) cout<<1,laze=1;
		else if(cntb0==3&&cntd0==1) cout<<1,laze=1;
		else if(cntb0==3&&cntd0==2) cout<<1,laze=1;
		else cout<<0<<0,laze=0;
	}
	if(laze==1){
		if(cntb0==1 && cntd0==2) cout<<1;
		else if(cntb0==2 && cntd0==3) cout<<1;
		else if(cntb0==2 && cntd0==1) cout<<1;
		else if(cntb0==3 && cntd0==2) cout<<1;
		else if(cntb0==4 && cntd0==5) cout<<1;
		else if(cntb0==5 && cntd0==4) cout<<1;
		else cout<<0;
	}
	return 0;
}