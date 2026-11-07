#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int a,int b){
	return a>b;
}int n,k,a[200001]={},vis[200001],maxx,f;
void dfs(int j){
	if(j==n+1){
		if(f!=k)return ;
		int g=0;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				if(g==0)g=a[i];
				else g&=a[i];
			}
		}maxx=max(maxx,g);
		return ;
	}vis[j]=1;
	f++;
	dfs(j+1);
	f--;
	vis[j]=0;
	dfs(j+1);
}signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(n<=20){
		dfs(1);
		cout<<maxx;
	}else if(k==1)cout<<a[1];
	else if(k==2){
		int ma=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ma=max(ma,a[i]&a[j]);
			}
		}cout<<ma;
	}else if(k==n-1){
		int ma=0;
		for(int i=1;i<=n;i++){
			int t;
			if(i==1)t=a[2];
			else t=a[1];
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				t&=a[j];
			}ma=max(ma,t);
		}cout<<ma;
	}else if(k==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
	}else cout<<a[k];
	return 0;
}
