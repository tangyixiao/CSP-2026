#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],m,maxn=-1,ans;
signed main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)
				continue;
			ans=max(maxn,a[i]&a[j]);
		}
	}
	cout<<ans;
	return 0;
}

