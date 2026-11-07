#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=5e5+7;
ll n,m,a[N],c[N],cnt[N],ans[N],timer;
void solve1(){
	for(ll t=1;t<=n;t++){
		memset(c,0,sizeof(c));
		memset(cnt,0,sizeof(cnt));
		for(ll i=t;i<=n;i++){
			if(cnt[a[i]]){
				for(ll j=cnt[a[i]]+1;j<=n;j++) c[j]=0;
			}
			else{
				c[i-t+1]=a[i];
				cnt[a[i]]=i-t+1;
			}
		}
		for(ll i=0;i<=n;i++){
			ans[c[i]]++;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	solve1();
	return 0;
}
