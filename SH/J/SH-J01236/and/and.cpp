#include<bits/stdc++.h>
using namespace std;
long long n, m, a[200005];
bool vis[200005];
int cc[200005];
long long ans=-1;
void dfs(int k, int s){
	if(k>m){
		long long as=cc[1];
		for(int i=2;i<=m;i++){
			as&=cc[i];
		}
		ans=max(ans, as);
		return;
	}
	for(int i=s;i<=n;i++){
		if(!vis[i]){
			cc[k]=a[i];
			vis[i]=1;
			dfs(k+1, i);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans, a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans, a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		ans=a[2];
		for(int i=3;i<=n;i++){
			ans&=a[i];
		}
		for(int i=2;i<=n;i++){
			long long o=a[1];
			for(int j=2;j<=n;j++){
				if(j==i) continue;
				o&=a[j];
			}
			ans=max(ans, o);
		}
		cout<<ans;
		return 0;
	}
	dfs(1, 1);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
