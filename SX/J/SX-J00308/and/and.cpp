#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int h[N],m,n;
bool dist[N];
int ans=-1;
void dfs(int de,int v){
	if(de==m){
		ans=max(ans,v);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!dist[i]){
			dist[i]=1;
			dfs(de+1,v&h[i]);
			dist[i]=0;
		}
	}
}
bool cmp(int c,int d){
	return c>d;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int mx=-1;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>h[i];
		if(n==m&&i!=1)h[i]&=h[i-1];
		if(m==1)mx=max(mx,h[i]);
	}
	if(n==m)cout<<h[n];
	else if(m==1)cout<<mx;
	else if(n<=20){
		dfs(0,1<<30);
		cout<<ans;
	}
	else{
		sort(h+1,h+1+n,cmp);
		cout<<h[m];
	}
	return 0;
}