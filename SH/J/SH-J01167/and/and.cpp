#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
ll n,m,a[N],ch[N],ans;
void solve1(ll u,ll now){//dfs
	if(u==m+1){
		ans=max(ans,now);
		return;
	}
	for(ll i=1;i<=n;i++){
		bool fl=0;
		for(ll j=1;j<=u;j++){
			if(ch[j]==i){
				fl=1;
				break;
			}
		}if(fl)continue;
		ch[u]=i;
		solve1(u+1,now&a[i]);
		ch[u]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll INF=1;
	for(ll i=1;i<=30;i++)INF*=2;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}if(m==n){
		ans=a[1];
		for(ll i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(n<=20)solve1(1,INF-1);//dfs
	cout<<ans;
	return 0;
}
