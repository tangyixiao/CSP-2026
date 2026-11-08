#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
ll n,a[N],m;
ll vis[N],cnt=0;
ll LG[25]={0,1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,16383,32767,65535,131071,262143,524287,1048575}; 
void dfs(int x,int ok){
	if(x>n){
		if(ok==m){
			ll tmp=0xfffff;
			for(int i=1;i<=n;i++){
				if(vis[i])tmp=tmp&a[i];
			}
			cnt=max(cnt,tmp);
		} 
		return;
	}
	if(ok<=m){
		vis[x]=1;
		dfs(x+1,ok+1);
		vis[x]=0; 
	}
	dfs(x+1,ok); 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll ans=0xfffff;
	cin>>n>>m;
	bool ok=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(LG[(int)log2(a[i])]!=a[i])ok=0;
		ans=ans&a[i];
	}
	if(ok){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(m==n){
		cout<<ans;
		return 0;
	}
	if(m==1){
		ll maxn=0;
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==2){
		ll maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j)maxn=max(maxn,a[i]&a[j]);
			}
		} 
		cout<<maxn;
		return 0;
	}
	if(n<=20){
		dfs(1,0);
		cout<<cnt;
	}
	return 0;
}
