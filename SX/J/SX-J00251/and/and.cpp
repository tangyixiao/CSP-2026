#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[2000005],n,m,f[2000005],ans=0;
bool f1=1,f2=1,vis[2000005],f3=1;
ll c[2000005],mmin=1e9;
void dfs(int st){
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			c[st]=i;
			if(st==m){
				ll sum=a[c[1]];
				for(int j=2;j<=m;j++) sum&=a[c[j]];
				ans=max(ans,sum);
			}
			else if(st<m) dfs(st+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mmin=min(mmin,a[i]);
		if(a[i]!=i-1) f1=0;
		if(int(log2(a[i]))!=log2(a[i])) f2=0;
		if(a[i]>=4) f3=0;
	}
	if(f3==1){
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=n;i>=m;i--){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		bool fff=0;
		for(int i=1;i<=n;i++){
			if(a[i]==mmin) continue;
			else{
				if(fff==0) ans=a[i],fff=1;
				else ans&=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	if(f1==1){
		cout<<n-m;
		return 0;
	}
	if(f2==1){
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=n-1;i>=m;i--) ans&=a[i],cout<<a[i]<<" ";
		cout<<ans;
		return 0;
	}
	dfs(1);
	cout<<ans;
	return 0;
}
