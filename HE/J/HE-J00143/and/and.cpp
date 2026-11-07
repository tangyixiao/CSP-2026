#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],num[N],ma;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		num[a[i]]++;
		ma=max(ma,a[i]);
	}
	int ans;
	for(int i=ma;i>=1;i--) {
		if(i==ma) {
			ans=ma;
		} else {
			ans&=i;
		}
		if(num[i]>=m) {
			cout<<i;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}