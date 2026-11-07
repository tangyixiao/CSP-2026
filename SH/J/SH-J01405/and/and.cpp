#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+1;
ll a[N],ans;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];	
	}
	sort(a+1,a+n+1);
	if(n<=2000) {
		ll f[n+1][m+1];
		memset(f,0,sizeof(f));
		for(int i=1; i<=n; i++) {
			f[i][1] = a[i];
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				if(j>m) {
					break;
				}
				for(int k=1; k<=i-1; k++) {
					f[i][j] = max(f[k][j-1]&a[i],f[i][j]);
				}
			}
		}
		ll maxn=0;
		for(int i=1; i<=n; i++) {
			maxn = max(f[i][m],maxn);
		}
		cout<<maxn;
	}
	else {
		ans = a[n-m+1];
		for(int i=n-m+2; i<=n; i++) {
			ans=a[i]&ans;
		} 
		cout<<ans;
	}
	return 0;
}
