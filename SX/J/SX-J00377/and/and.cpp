#include <bits/stdc++.h>
#define lonit long long
using namespace std;
const lonit MAXN=2e5+5;
int n,m;
int a[MAXN];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxm=-1e9;
	if(m==1){
		for(int i=1;i<=n;i++) maxm=max(maxm,a[i]);
		cout<<maxm;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				maxm=max(maxm,(a[i]&a[j]));
			}
		}
		cout<<maxm;
		return 0;
	}
	if(m==3){
		for(int i=1;i<=n-2;i++){
			for(int j=i+1;j<=n-1;j++){
				for(int k=j+1;k<=n;k++)
					maxm=max(maxm,(a[i]&a[j]&a[k]));
			}
		}
		cout<<maxm;
		return 0;
	}
	if(m==4){
		for(int i=1;i<=n-3;i++){
			for(int j=i+1;j<=n-2;j++){
				for(int k=j+1;k<=n-1;k++){
					for(int i2=k+1;i2<=n;i2++)
						maxm=max(maxm,(a[i]&a[j]&a[k]&a[i2]));
				}
			}
		}
		cout<<maxm;
		return 0;
	}
	if(m==5){
		for(int i=1;i<=n-4;i++){
			for(int j=i+1;j<=n-3;j++){
				for(int k=j+1;k<=n-2;k++){
					for(int i2=k+1;i2<=n-1;i2++){
						for(int j2=i2+1;j2<=n;j2++)
						maxm=max(maxm,(a[i]&a[j]&a[k]&a[i2]&a[j2]));
					}
				}
			}
		}
		cout<<maxm;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		for(int i=1;i<=n;i++){
			maxm=max(maxm,(ans&a[i]));
		}
		cout<<maxm;
		return 0;
	}
	cout<<n-m;
	return 0;
}