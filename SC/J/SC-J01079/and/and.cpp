#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int N=2e5+5;
ll ans=-1,a[N]={0x3f3f3f3f,0};
bool cmp(int x,int y){return x>y;}
void dfs(ll sp,ll k,ll t){
	if(sp>n+1)return;
	if(k>m)return;
	if(sp>n&&k==m){
		ans=max(ans,t);
		return;
	}
	dfs(sp+1,k,t);
	dfs(sp+1,k+1,t&a[sp]);
}
ll s;
bool checka(){
	bool f=true;
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		if(a[i]!=(1<<(i-1)))f=false;
	}
	return f;
}
bool checkb(){
	bool f=true;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1)f=false;
	}
	return f;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		s=s&a[i];
	}
	if(n<=20){
		dfs(1,0,-1);
		cout<<ans;
	}
	else if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
	}
	else if(m==n){
		cout<<s;
	}
	else if(m==2){
		ll res=0x3f3f3f3f;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				res=max(ans,a[i]&a[j]);
			}
		}
		cout<<res;
	}
	else if(checka()){
		cout<<(1<<(m-1));
	}
	else if(checkb()){
		ll x=0x3f3f3f3f;
		for(int i=n-1;i>=n-m;i--){
			x=x*a[i];
		}
		cout<<x;
	}
}