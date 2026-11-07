#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
#define ll long long
ll n,a[N],m,sum;
void dfs(ll cur,ll ans,ll cnt){
	if(cur>n){
		if(cnt==m)sum=max(sum,ans);
		return ;
	}
	dfs(cur+1,ans&a[cur],cnt+1);
	dfs(cur+1,ans,cnt);
}
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,2097151,0);
		cout<<sum;
	}else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}else if(m==n){
		ll ans=2097151;
		for(int i=1;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}else if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ll x=a[i]&a[j];
				sum=max(sum,x);
			}
		}
		cout<<sum;
	}else{
		ll ans=2097151;
		sort(a+1,a+n+1);
		for(int i=0;i<m;i++){
			ans=ans&a[n-i];
		}
		cout<<ans;
	}
	return 0;
}