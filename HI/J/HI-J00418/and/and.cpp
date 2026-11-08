#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N],vis[N],b[N];
int n,m,mx;
void dfs(int dep){
	if(dep>m){
		int sum=b[1];
		for(int i=2;i<=m;i++){
			sum &= b[i];
		}
		mx = max(mx,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0) b[dep] = a[i];
		else continue;
		vis[i]=1;
		dfs(dep+1);
		vis[i]=0;
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	cin>>n>>m;
	bool ok = 1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bool o=0;
		for(int j=1;j<=20;j++){
			int sum = pow(2,j);
			if(sum == a[i]+1) o=1;
		}
		if(o==0) ok=0;
	}
	if(ok==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	dfs(1);
	cout<<mx;
	
	return 0;
}
