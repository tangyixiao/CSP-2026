#include<iostream>
#define ll long long
using namespace std;
const int N=2e5+5;
int n,m,vis[N];
ll a[N],ans;
void dfs(int x,int k,ll s){
	if(k==m){
		ans=max(ans,s);
		return;
	}
	for(int i=x;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(i+1,k+1,s&a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		vis[i]=1;
		dfs(i+1,1,a[i]);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}