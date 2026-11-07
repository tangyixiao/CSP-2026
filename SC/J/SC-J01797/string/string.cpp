#include<bits/stdc++.h>
#define int long long
using namespace std;
pair<int,char> a[200010];
int tot,n,l,r,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[++tot].first>>a[tot].second;
		if(a[tot].second==a[tot-1].second){
			a[tot-1].first+=a[tot].first;
			tot--;
		}
	}
	l=1,r=tot;
	while(l<r){
//		cout<<l<<' '<<a[l].first<<' '<<r<<' '<<a[r].first<<'\n';
		int minn=min(a[l].first,a[r].first);
		if(a[l].second!=a[r].second) ans+=minn;
		a[l].first-=minn,a[r].first-=minn;
		if(!a[l].first) l++;
		if(!a[r].first) r--;
	}
	cout<<ans<<'\n';
	return !"I'm xcb";
}
/*
tsuki ga kirei ne to iwaretai!
kimi no me no saki zutto watashi de itai
tsuki ga kirei ne wa watashi ja nai kara
nara kon'ya dake

I want to play phigros and maimai!!!

nine bird is so kawaii!

*/