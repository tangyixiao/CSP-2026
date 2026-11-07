#include <bits/stdc++.h>
#define int long long
#define N 200010
using namespace std;
int n,k,ans;
int a[N];
int mp[N];
bool vis[N];
bool mpv[N];
void dfs(int sum,int nk,int nm){
	if(nk>k || (sum==0 || sum==1)){
		ans=max(ans,sum);
		return;
	}
	for(int i=nm;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs((sum&mp[i]),nk+1,i+1);
			vis[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int cnt=1;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]){
			mp[cnt]=a[i];
			cnt++;
		}
	}
	n=cnt-1;
	for(int i=1;i<=n;i++){
		dfs(mp[i],2,i+1);
	}
	cout<<ans;
	return 0;
}
/*
1
10
11
100
101
110
111
1000
*/