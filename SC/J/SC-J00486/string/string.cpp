#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n" 
int n,a[200005],l=1,r,ans;
char c[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;++i) cin>>a[i]>>c[i];
	while(l<r){
//		cout<<l<<' '<<r<<endl;
//		cout<<a[l]<<' '<<a[r]<<endl;
		if(c[l]!=c[r]) ans+=min(a[l],a[r]);
		int tmp=a[l];
		a[l]-=min(a[l],a[r]);
		a[r]-=min(tmp,a[r]);
//		cout<<a[l]<<' '<<a[r]<<endl;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
//		cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}