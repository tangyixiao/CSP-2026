#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],ans=0;
	int n,m;
void dfs(int x,int sum,int num) {
	if(num==m) {
		ans=max(ans,sum);
		return ;
	}
	if(x==n+1) return ;
	dfs(x+1,sum&a[x],num+1);
	dfs(x+1,sum,num);
}
main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	dfs(1,(1<<31)-1,0);
	cout<<ans;
}

//4 2
//3 15 12 12