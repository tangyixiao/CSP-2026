#include <bits/stdc++.h>
using namespace std;
int n,a[200005],l=1,r;
char c[200005];
long long ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n; r=n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	while(l<r) {
		int min1=min(a[l],a[r]);
		bool f=0;
		if(c[l]!=c[r]) f=1;
		a[l]-=min1;
		a[r]-=min1;
		if(!a[l]) l++;
		if(!a[r]) r--;
		if(f) ans+=min1;
	}
	cout<<ans;
	return 0;
}
