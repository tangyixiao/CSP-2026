#include<bits/stdc++.h>
#define int long long
using namespace std; 
int n,m;
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int ans=a[n];
	for(int i=1;i<m;i++){
		ans&=a[n-i];
	}
	cout<<ans;
	return 0;
}
