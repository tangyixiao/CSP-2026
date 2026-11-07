#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[1000500];
int maxx;
int maxn;
int minn;
void dfs(int wz,int shu,int zhi){
	if(shu>m)return;
	if(shu==m){
		minn=max(minn,zhi);	
		return;
	}
	if(wz==n+1){
		if(shu==m){
			minn=max(minn,zhi);
		}
		return;
	}
	dfs(wz+1,shu+1,zhi&a[wz]);
	dfs(wz+1,shu,zhi);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m<=5000){
		if(m==1){
			cout<<maxx;
		}else if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					maxn=max(maxn,a[i]&a[j]);
				}
			}
			cout<<maxn;
		}else if(m==n){
			int ans=a[1];
			for(int i=2;i<=n;i++){
				ans=ans&a[i];
			}
			cout<<ans;
		}else{
			dfs(1,0,2047);
			cout<<minn;
		}
	}
	return 0;
}