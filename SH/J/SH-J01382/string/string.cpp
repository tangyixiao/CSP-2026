#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N]; char c[N];
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		int less=min(a[l],a[r]);
		if(c[l]!=c[r]){
			ans+=less;
//			printf("+ %d = %d when [%d, %d]\n",less,ans,l,r);
		}
		a[l]-=less; a[r]-=less;
		if(!a[l]) l++;
		if(!a[r]) r--;
	}
	printf("%lld\n",ans);
	return 0;
}

