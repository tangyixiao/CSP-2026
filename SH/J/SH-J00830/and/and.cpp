#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;
ll n,m;
ll a[N];
ll cnt[N];
vector <ll> d[N];
ll b[N];
bool ch[N];
ll mx;
ll check(ll c){
	ll ans=0;
	ll flag=1;
	for(ll i=1;i<=c;i++){
		if(ch[i]==1){
			if(flag==1){
				ans=b[i];
				flag=0;
			}
			ans=ans&b[i];
		}
	}
	return ans;
}
void dfs(ll d,ll c,ll ans){
	if(d>c){
		if(ans!=m){
			return;
		}
		ll g=check(c);
		mx=max(mx,g);
		return;
	}
	if(ans>m){
		return;
	}
	ch[d]=1;
	dfs(d+1,c,ans+1);
	ch[d]=0;
	dfs(d+1,c,ans);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	cin>>m;
	ll mx1=0;
	ll c[N];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		ll x=a[i];
		ll ans=0;
		ll q=0;
		while(x){
			ans++;
			if(x%2==1){
				q++;
				c[q]=ans;
			}
			x/=2;
		}
		cnt[ans]++;
		d[ans].push_back(i);
		for(ll i=1;i<=q;i++){
			if(c[i]==ans){
				continue;
			}		
			cnt[c[i]]++;
			d[c[i]].push_back(i);
		}
		mx1=max(mx1,ans);
	}
	for(ll i=mx1;i>=1;i--){
		if(cnt[i]>=m){
			ll c=0;
			for(auto j:d[i]){
				c++;
				b[c]=a[j];
			}
			dfs(1,cnt[i],0);
			break;
		}
	}
	cout<<mx;
	return 0;
}
