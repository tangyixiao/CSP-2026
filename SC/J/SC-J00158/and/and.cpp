#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100010];
signed main() {
	freopen("and.in","r",stain);
	freopen("and.out","w",stdout);
	int n,m,ans=-1;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	if(m==1) cout<<a[n];
	else if(m==2) {
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				if(i==j) {

				} else {
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		cout<<ans;
	} else if(m==n) {
		ans=a[1];
		for(int i=2; i<=n; i++) {
			ans=ans&a[i];
		}
		cout<<ans;
	}
	return 0;
}