#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,m,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
    if(n<=2000){
		if(m==1){
			int maxs=0;
			for(int i=1;i<=n;i++) maxs=max(maxs,a[i]);
			cout<<maxs;
			return 0;
		}else if(m==2){
			int maxs=0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					int q=a[i]&a[j];
					if(i!=j) maxs=max(maxs,q);
				}
			}cout<<maxs;
		}else if(m==n){
			int ans=a[1];
			for(int i=2;i<=n;i++) ans=ans&a[i];
			cout<<ans;
		}else if(n<=20){
			int maxs=0;
			for(int i=1;i<=n*n;i++){
				next_permutation(a+1,a+1+n);
				int ans=a[1];
				for(int i=2;i<=m;i++) ans=ans&a[i];
				maxs=max(maxs,ans);
			}cout<<maxs;
		}
	}
	return 0;
}
