#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N=2e5+1;
int a[N];
char c[N];
signed main(void){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for (int i = 1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while (l<=r){
		int k=min(a[l],a[r]);
		if (c[l]!=c[r]) ans+=k;
		a[l]-=k;
		a[r]-=k;
		if (!a[l]) ++l;
		else --r;
	}
	cout<<ans;
	return 0;
}
