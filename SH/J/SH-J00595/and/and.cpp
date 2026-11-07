#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int ans=-1;
int a[200005];
void dfs(int now,int cnt,int an){
	if(now==n+1){
		if(cnt==m){
			ans=max(ans,an);
			//cout<<an<<endl;
		}
		return;
	}
	dfs(now+1,cnt,an);
	an=(an&a[now]);
	dfs(now+1,cnt+1,an);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
	}
	else if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans;
	}
	else{
		dfs(1,0,1024*1024-1);
		cout<<ans;
	}
	return 0;
}
