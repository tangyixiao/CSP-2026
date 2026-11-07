#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],ans=0;
void dfs(int x,int k,int l){
	if(k>n){
		return;
	}
	if(l==m){
		ans=max(ans,x);
		return;
	}else if(l<m){
		if(x==0){
			dfs(a[k+1],k+1,l+1);
			dfs(x,k+1,l);
		}else{
			dfs(x&a[k+1],k+1,l+1);
			dfs(x,k+1,l);
		}
	}
}
signed main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(0,0,0);
		cout<<ans<<endl;
		return 0;
	}else{
		if(m==1){
			for(int i=1;i<=n;i++){
				ans=max(ans,a[i]);
			}
			cout<<ans<<endl;
			return 0;
		}else if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++){
				ans=ans&a[i];
			}
			cout<<ans<<endl;
			return 0;
		}else{
			ans=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
			cout<<ans<<endl;
			return 0;
		}
	}	
	return 0;
}