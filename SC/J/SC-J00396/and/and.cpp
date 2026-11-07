#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n-1){
		int ans=0;
		for(int i=1;i<=n;i++){
			int x=2147483647;
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				x=x&a[j];
			}
			ans=max(ans,x);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				int x=a[i]&a[j];
				ans=max(ans,x);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans=2147483647;
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==3){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					if(k==i||k==j||i==j){
						continue;
					}
					int x=a[i]&a[j]&a[k];
					ans=max(ans,x);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	return 0;
}