#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
bool ok[N];
int a[N];
int n,m;
int ans=-1e9;
void dfs(int now,int k){
	if(now==n+1){
		if(k!=m)return;
		int q;
		for(int i=1;i<=n;i++)
			if(ok[i]==1){q=a[i];break;}
		for(int i=1;i<=n;i++)
			if(ok[i]==1)q=(q & a[i]);
		ans=max(ans,q);
		return;
	}
	if(k<m){
		ok[now]=1;
		dfs(now+1,k+1);
		ok[now]=0;
	}
	ok[now]=0;
	dfs(now+1,k);
}void pf(){
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++)mx=max(mx,a[i]);
		cout<<mx;
	}else if(m==n){
		int x=a[1];
		for(int i=1;i<=n;i++)x&=a[i];
		cout<<x;
	}else if(m==2){
		int y=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				y=max(y,(a[i] & a[j]));
		cout<<y;
	}else cout<<0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20){
		dfs(1,0);
		cout<<ans;
	}else
		pf();
	return 0;
}
