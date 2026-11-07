#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
int n,m;
int ans;
int maxn;
void dfs(int id,int sum,int cnt){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=id+1;i<=n;i++){
		if(sum==0) dfs(i,a[i]&a[i],cnt+1);
		else dfs(i,sum&a[i],cnt+1);
	}
	return;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int tmp;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(n<=20){
		dfs(0,0,0);
		cout<<ans;
	}else{
		if(m==1){
			cout<<maxn;
			return 0;
		}
		if(m==n){
			tmp=a[1];
			for(int i=2;i<=n;i++){
				tmp=tmp&a[i];
			}
			cout<<tmp;
			return 0;
		}
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
			cout<<ans;
		}
	}
	return 0;
}