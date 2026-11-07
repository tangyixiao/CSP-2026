#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+6;
int n,k;
ll vis[N],a[N];
ll ans;
void dfs(int now,int cnt){
	if(cnt>k)return;
	if(now==n+1){
		if(cnt==k){
			ll l=-1;
			for(int i=1;i<=n;++i){
				if(vis[i]){
					if(l<0)l=a[i];
					else l=(l&a[i]);
				}
			}
			ans=max(ans,l);
		}
		return;
	}
	vis[now]=1;
	dfs(now+1,cnt+1);
	vis[now]=0;
	dfs(now+1,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n<=600)dfs(1,0);
	else{
		sort(a+1,a+n+1);
		int cnt=a[n];
		int sum=1;
		for(int i=n-1;i>=1;--i){
			if(sum==k){
				cout<<cnt;
				return 0;
			}
			cnt=(cnt&a[i]);
			sum++;
		}
	}
	cout<<ans;
	return 0;
}
