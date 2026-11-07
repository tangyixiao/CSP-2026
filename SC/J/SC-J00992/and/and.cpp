#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,m;
int a[200005];
int ad[200005];
int ans=-1;
void dfs(int now,int cnt){
	if(cnt==m+1){
		int p=ad[1];
		for(int i=2;i<=m;i++){
			p&=ad[i];
		}
		if(p>ans) ans=p;
		return;
	}
	if(now==n+1) return;
	dfs(now+1,cnt);
	ad[cnt]=a[now];
	dfs(now+1,cnt+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int p=a[1];
		for(int i=2;i<=m;i++){
			p&=a[i];
		}
		cout<<p;
		return 0;
	}
	if(m==1||n>2000){
		ans=-1;
		for(int i=1;i<=n;i++){
			if(a[i]>ans) ans=a[i];
		}
		cout<<ans;
		return 0;
	}
	dfs(1,1);
	cout<<ans;
	return 0;
} 