#include <bits/stdc++.h>
using namespace std;
int n,m,ans,a[200010],use[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) use[i]=1;
	for(int k=30;k>=0;k--){
		int cc=0;
		ans+=(1<<k);
		for(int i=1;i<=n;i++){
			if(((a[i]>>k)&1)&&use[i]) cc++;
		}
		if(cc>=m){
			for(int i=1;i<=n;i++){
				if(((a[i]>>k)&1)==0) use[i]=0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(use[i]) ans&=a[i];
	}
	cout<<ans;
	return 0;
}
