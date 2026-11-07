#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005],maxn=0;
int n,m;
void dfs(ll now,ll cnt,ll num){
	if(now>n)return;
	if(cnt==m)maxn=max(maxn,num);
	dfs(now+1,cnt,num);
	dfs(now+1,cnt+1,num&a[now+1]);
	
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=2000){ 
		for(int i=1;i<=n;i++)dfs(0,0,a[i]);
		cout<<maxn;
	}
	else{
		cout<<n-m+1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)solve();
	return 0;
}

