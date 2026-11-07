#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,amxn,ans;
ll a[200005],vis[200005];
bool cmp(ll a,ll b){
	return a>b;
}
int calc(ll a,ll b){
	if (a==b)return a;
	ll aws=0;
	vector<ll>aa,bb;
	while(a!=0){
		aa.push_back(a%2);
		a/=2;
	}
	while(b!=0){
		bb.push_back(b%2);
		b/=2;
	}
	for (ll i=0;i<min(aa.size(),bb.size());i++){
		if (aa[i]==bb[i])aws+=1<<i;
	}
	return aws;
	
}
void dfs(ll step){
	if (step>n){
		ll d=0;
		for (ll i=1;i<=n;i++){
			if (vis[i]==1){
				d++;
				if (d==1)ans=a[i];
				else ans=calc(ans,a[i]) ;
			}
		}
		if (d==m){
			amxn=max(amxn,ans);
		}
		return ;
	}
	for (ll i=1;i>=0;i--){
		vis[step]=i;
		dfs(step+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	if (m==1){
		cout<<a[1];
	}
	if (n<=2000){
		dfs(1);
		cout<<amxn;
	}
	if(m==n){
		ll awe=a[1];
		for (ll i=2;i<=n;i++){
			awe=calc(awe,a[i]);
		}
	} 
	return 0;  
} 
