#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=5e5+5;
const ll mod=1e9+7;
const ll inf=0x3f3f3f3f3f3f3f3f;
ll n,m;
ll a[maxn];
ll d[maxn];
ll c[maxn];
ll b[maxn];
ll ans[maxn];
ll sum[maxn];
set<ll> s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}	
	ll cnt=0;
	for(int k=1;k<=n;k++){
		cnt=0;
		memset(b,0,sizeof(b));
		memset(d,0,sizeof(d));
		memset(c,0,sizeof(c));
		for(int i=k;i<=n;i++){
			if(!b[a[i]]){
				b[a[i]]=1;
				d[++cnt]=a[i];
				c[a[i]]=i;
			}else{
				while(cnt-1>=c[a[i]]){
					b[cnt]=0;
					d[cnt]=0;
					cnt--;
				}
			}
		}
		for(int i=1;i<=cnt;i++){
			ans[d[i]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

