#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200100],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			ans=(ans&a[i]);
		}
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long s=(a[i]&a[j]);
				ans=max(s,ans);
			}
		}
	}else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					long long s=(a[i]&a[j]&a[k]);
				    ans=max(s,ans);
				}
			}
		}
	}else if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						long long s=(a[i]&a[j]&a[k]&a[l]);
				    	ans=max(s,ans);
					}
				}
			}
		}
	}else if(m==5){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						for(int h=l+1;h<=n;h++){
							long long s=(a[i]&a[j]&a[k]&a[l]&a[h]);
				    		ans=max(s,ans);
						}
					}
				}
			}
		}
	}	
	cout << ans;
	return 0;
}
