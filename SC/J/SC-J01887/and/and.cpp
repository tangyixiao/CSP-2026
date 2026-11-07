#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,p,c[6],the_t;
bool fA=1,fC=1,fB=1;
void dfs(int x,int k,int sum){
	if(k==m){
		ans=max(ans,sum);
		return;
	}
	if(x==n+1) return;
	if(sum!=-1) dfs(x+1,k+1,sum&a[x]);
	else dfs(x+1,k+1,a[x]);
	dfs(x+1,k,sum);
}
void dfs2(int x,int k,int sum){
	if(x==5){
		if(k>=m) ans=max(ans,sum);
		return;
	}
	if(c[x]) {
		if(sum!=-1) dfs(x+1,k+c[x],sum&x);
		else dfs(x+1,k+c[x],a[x]);
		dfs(x+1,k,sum);
	}
	else dfs(x+1,k,sum);
}
void dfs3(int x,int k,int sum){
	the_t++;
	if(the_t>=1000000) return;
	if(k==m){
		ans=max(ans,sum);
		return;
	}
	if(x==n+1) return;
	if(sum!=-1) dfs(x+1,k+1,sum&a[x]);
	else dfs(x+1,k+1,a[x]);
	dfs(x+1,k,sum);
}
signed main(){
	ios::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) fB=0;
		if(a[i]>4) fC=0;
		if(i==1) p=a[i];
		else p=p&a[i];
		if(!fA) continue;
		int x=a[i];
		while(x){
			if(x%2==0) {
				fA=0;
				break;
			}
			x/=2;
		}
	}
	if(n<=20){
		dfs(1,0,-1);
		cout<<ans;
		return 0;
	}
	if(n<=2000){
		if(m==1) {
			int mx=0;
			for(int i=1;i<=n;i++) mx=max(mx,a[i]);
			cout<<mx;
			return 0;
		}
		if(m==2){
			int mx=0;
			for(int i=1;i<=n;i++) 
				for(int j=1;j<=n;j++) if(i!=j) mx=max(mx,a[i]&a[j]);
			cout<<mx;
			return 0;
		}
		if(m==n) {
			cout<<p;
			return 0;
		}
	}
	if(fA) {
		sort(a+1,a+n+1);
		int mx=a[n];
		for(int i=n;i>=n-m+1;i--){
			mx=mx&a[i];
		}
		cout<<mx;
		return 0;
	}
	if(fB){
		int mx=a[n];
		for(int i=n;i>=n-m+1;i--) mx=mx&a[i];
		cout<<mx;
		return 0;
	}
	if(fC){
		for(int i=1;i<=n;i++) c[a[i]]++;
		dfs2(1,0,-1);
		cout<<ans;
		return 0;
	}
	dfs3(1,0,-1);
	cout<<ans;
	return 0;
}