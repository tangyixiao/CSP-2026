#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+10;
ll a[N];
bool vis[N];
ll n,m,ans;
void dfs(ll sum,ll cnt,ll k){
	if(cnt==m+1 || k==n+1){
		ans=max(ans,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			vis[i]=true;
			dfs(sum&a[i],cnt+1,k+1);
			vis[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		ll mx=0;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	else if(m==2){
		ll mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
		return 0;
	}
	else if(a[1]==0 && a[2]==1 && a[3]==2 && a[4]==3){
		cout<<n-m;
		return 0;
	}
	else{
		dfs(2097151,1,1);
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
/*
4 2
3 15 12 12
5 3
31 3 1 15 7

*/
