#include<bits/stdc++.h>
using namespace std;
namespace MoonHalfx{
	#define int long long 
	const int N=5e5+5;
	int n,m;
	int a[N];
	int lst[N];
	int bl[N],ans[N];
	signed main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i],lst[a[i]]=i,bl[i]=1;
		for(int i=1;i<=n;i++)ans[a[i]]+=bl[i],bl[lst[a[i]]+1]+=bl[i];
		for(int i=1;i<=m;i++)cout<<ans[i]<<" \n"[i==m];
		return 0;
	}
	#undef int
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	MoonHalfx::main();
	return 0;
}
