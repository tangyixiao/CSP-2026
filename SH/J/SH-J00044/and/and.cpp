#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,ans;
ll a[200009];
void dfs(ll x,ll d,ll cnt){
	if(d==0){
		ans=max(ans,cnt);
		return;
	}
	if(x>n)return;
	dfs(x+1,d-1,cnt&a[x]);
	dfs(x+1,d,cnt);
}
void solve20(){
	dfs(2,m-1,a[1]);
	dfs(2,m,a[2]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20)solve20();
	else if(n<=2000){
		if(m==1)ans=*max_element(a+1,a+n+1);
		else if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++){
				ans&=a[i];
			}
		}
		else if(m==2){
			for(int i=1;i<=n-1;i++){
				for(int j=i+1;j<=n;j++)
					ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else{
		sort(a+1,a+n+1,greater<int>());
		ans=a[1];
		for(int i=2;i<=m;i++){
			ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
}
