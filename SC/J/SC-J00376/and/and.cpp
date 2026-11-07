#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,m,a[N],ans;
void dfs(ll i,ll sum,ll j){
	if(j>m){
		ans=max(ans,sum);
		return;
	}
	if(i>n)return;
	dfs(i+1,sum,j);
	dfs(i+1,sum&a[i],j+1);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<*max_element(a+1,a+n+1);
		return 0;
	}
	if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(ll i=1;i<=n;i++){
			ll sum;
			if(i!=1)sum=a[1];
			else sum=a[2];
			for(ll j=2;j<=n;j++){
				if(j!=i)sum=sum&a[j];
			}
			ans=max(sum,ans);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(ll i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	for(ll i=1;i<=n;i++){
		dfs(i+1,a[i],2);
	}
	cout<<ans;
	return 0;
}