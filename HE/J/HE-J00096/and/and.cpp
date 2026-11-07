#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
int n,m;
int a[N];
int best=0;
inline void dfs(int now,int cnt,int sum){
	if(now==n&&cnt!=m)return;
	if(now<=n&&cnt==m){
		best=max(best,sum);
		return;
	}
	dfs(now+1,cnt+1,sum&a[now+1]);
	dfs(now+1,cnt,sum);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		dfs(i,1,a[i]);
	cout<<best;
	return 0;
}
/*
0011
1111
1100
1100

3322
*/