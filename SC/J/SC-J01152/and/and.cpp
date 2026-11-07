#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int> a(n);
	vector<bool> except(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=0;
	for(int k=30ll;k>=0ll;k--){
		int cnt1=0;;
		for(int i=0;i<n;i++)
			if(!except[i]&&((a[i]>>k)&1ll))cnt1++;
		if(cnt1>=m){
			ans|=(1ll<<k); 
			for(int i=0;i<n;i++)
				if(!except[i]&&!((a[i]>>k)&1ll))except[i]=1;
		}
	}
	cout<<ans<<'\n';
	return 0;
}