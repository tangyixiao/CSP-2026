#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,f[200005],a[200005],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(f[j]) continue;
			if((a[j]>>i)&1) cnt++;
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(((a[j]>>i)&1)==0) f[j]=1;
			}
			ans|=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
