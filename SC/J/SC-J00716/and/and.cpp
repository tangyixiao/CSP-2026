#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int n,m;
ll a[N],ma=0LL;
void dfs(ll i,ll x,ll s){
	if(s==m){
		ma=max(x,ma);
		return;
	}
	if(i>n)
		return;
	if(x==0&&s==1)
		x=a[i];
	dfs(i+1,x,s);
	dfs(i+1,x&a[i+1],s+1);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(0,0,0);
	cout<<ma;
	return 0;
}