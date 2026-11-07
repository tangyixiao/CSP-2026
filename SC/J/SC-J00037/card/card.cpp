#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5,M=3e5+5;
ll n,m,a[N],b[N],cnt[M];
map<ll,ll>mp;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	mp[a[n]]=n;
	for(ll i=n-1;i>=1;i--){
		b[i]=mp[a[i]];
		mp[a[i]]=i;
	}
//	for(ll i=1;i<=n;i++){
//		cout<<b[i]<<' ';
//	}
	for(ll i=1;i<=n;i++){
		ll d=i;
		while(d<=n){
			if(b[d]==0){
				cnt[a[d]]++;
				d++;
			}
			else{
				cnt[a[b[d]]]++;
				d=b[d]+1;
			}
		}
		
	}
	for(ll i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}