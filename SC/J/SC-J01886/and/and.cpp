#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2*1e5+1;
int n,m,a[maxn];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int ans=a[n-m+1];
	for(int i=n-m+2;i<=n;i++) ans=ans&a[i];
	cout<<ans;
	return 0;
}