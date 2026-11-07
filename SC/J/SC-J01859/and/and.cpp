#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005],mx=-1e9;
bool used[200005];
void dfs(ll k,ll s){
	if(k==m+1){
		mx=max(mx,s);
		return ;
	}
	for(ll i=1;i<=n;i++){
		if(used[i])continue;
		else{
			used[i]=1;
			if(k==1){
				dfs(k+1,a[i]);
			}
			else{
				dfs(k+1,(s&a[i]));
			}
			used[i]=0;
		}
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	dfs(1,0);
	cout<<mx;
	return 0;
}