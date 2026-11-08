#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; cin>>n>>m;
	int a[1000005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<a[n];
	return 0;
}
