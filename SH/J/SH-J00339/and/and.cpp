#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const int N=2010;
ll n,m,a[N];
bool mem[N][N];
ll cache[N][N];
ll dfs(int id,int use)
{
	if(use==m) return (ll)(1<<30)-1;
	if(id>n) return 0;
	if(mem[id][use]) return cache[id][use];
	mem[id][use]=1;
	ll pick=dfs(id+1,use+1)&a[id],drop=dfs(id+1,use);
	return cache[id][use]=max(pick,drop);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	if(n<=2000) cout<<dfs(1,0)<<endl;
	return 0;
}
