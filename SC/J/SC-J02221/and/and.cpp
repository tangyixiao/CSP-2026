#include <bits/stdc++.h>
using namespace std;
long long n,m,ans=-1;
long long a[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(long long i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
	return 0;
} 