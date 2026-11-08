#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=m;i++){
		if(i==1) ans=a[1];
		else ans=(a[i]&ans);
		cout<<a[i]<<" ";
	}
	cout<<ans;

    return 0;
}
