#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],vis[200005],ans,cnt;
void dfs(long long num,long long cnt,long long an){
	if(num==m){
		ans=max(ans,an);
		return;
	}
	for(int i=cnt+1;i<=n;i++)dfs(num+1,i,an&a[i]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	if(m==1){
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
	}
	else if(m==n){
		cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt&=a[i];
		}
		cout<<cnt;
	}
	else{
	for(int i=1;i<=n;i++)dfs(1,i,a[i]);
	cout<<ans;
	}
	return 0;
}