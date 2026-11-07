#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
ll sum[200005];
ll n,m;
ll ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	sum[i]=sum[i-1]&a[i];
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i+m]|sum[i-1]);
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
