#include <bits/stdc++.h>
using namespace std;
int n,m,ans=-1;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i] & a[j]));
			}
		}
	cout<<ans;
	return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	cout<<ans;
	return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	cout<<ans;
	return 0;
	}
	if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					ans=max(ans,(a[i] & a[j] & a[k]));
				}
			}
		}
	cout<<ans;
	return 0;
	}
	if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int q=k+1;q<=n;q++){
						ans=max(ans,(a[i] & a[j] & a[k] & a[q]));
					}
				}
			}
		}
	cout<<ans;
	return 0;
	}
	if(m==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int q=k+1;q<=n;q++){
						for(int p=q+1;p<=n;p++){
							ans=max(ans,(a[i] & a[j] & a[k] & a[q] & a[p]));
						}	
					}
				}
			}
		}
	cout<<ans;
	return 0;
	}
	return 0;
}
