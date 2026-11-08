#include<bits/stdc++.h>
using namespace st	d;
namespace MoonHalfx{
	#define int long long 
	const int N=2e5+5;
	int n;
	pair<int,char>a[N];
	signed main(){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i].first>>a[i].second;
		int ans=0;
		int starts=1,ends=n;
		while(starts<ends){
			int bs=(a[starts].second!=a[ends].second);
			int gs=min(a[starts].first,a[ends].first);
			a[starts].first-=gs,a[ends].first-=gs;
			ans+=gs*bs; 
			while(starts<ends && a[starts].first==0)starts++;
			while(starts<ends && a[ends].first==0)ends--;
		}cout<<ans<<"\n";
		return 0;
	}
	#undef int
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	MoonHalfx::main();
	return 0;
}
