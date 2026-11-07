#include<bits/stdc++.h>
#include<cstdio>
#define int long long
#define endl '\n'
using namespace std;
struct ejz{
	int cd;
	int ss;
	string z;
}ejs[200005];
ejz zh(int a){
	ejz hd;
	string s;
	hd.ss=a;
	while(a!=0){
		s+=(char)(a%2+'0');
		a/=2;
	}
	hd.cd=s.size();
	hd.z=s;
	return hd;
}
cmd(ejz a,ejz b){
	int mx=max(a.cd,b.cd);
	if(a.ss<b.ss){
		return 0;
	}
	return 1;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int sz;
		cin>>sz;
		ejs[i]=zh(sz);
	}
	sort(ejs+1,ejs+n+1,cmd);
	int ans=ejs[1].ss;
	for(int i=2;i<=m;i++){
		ans&=ejs[i].ss;
	}
	cout<<ans;
	return 0;
}