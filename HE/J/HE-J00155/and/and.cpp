#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N =2e5+10;
int n,m,ma=-1,x=-1,a[N],b[N],ans;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i],ma=max(a[i],ma);
	sort(a+1,a+n+1);
	if(m==1) {
		cout<<ma;
		return 0;
	}else if(m==2) {
		for(int i=1; i<=n; i++)
			for(int j=i+1; j<=n; j++) x=max(x,a[i]&a[j]);
		cout<<x;
		return 0;
	}
	ans=a[n];
    for(int i=n-1;i>=n-m+1;i--) ans&=a[i];
    cout<<ans<<'\n';
    return 0;
}
