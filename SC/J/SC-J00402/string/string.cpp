#include<bits/stdc++.h>
using std::min;
const int N=2e5+10;
int a[N];char c[N];
int main(){
	std::freopen("string.in","r",stdin);
	std::freopen("string.out","w",stdout);
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d %c",&a[i],&c[i]);
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		int k=min(a[l],a[r]);
		if(c[l]!=c[r]) ans+=k;
		a[l]-=k;a[r]-=k;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	printf("%lld",ans);
	return 0;
}