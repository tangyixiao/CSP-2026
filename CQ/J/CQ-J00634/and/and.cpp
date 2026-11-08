#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	if(m==n){
		int ans=a[1];
		for (int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout <<ans;
		return 0;
	}else if(m==n-1){
		int ans1=a[1],ans2=a[2];
		for (int i=1;i<=n-1;i++){
			ans1&=a[i];
		}
		for (int i=1+1;i<=n;i++){
			ans2&=a[i];
		}
		cout <<max(ans1,ans2);
	}else if(m==2){
		int ans=0;
		for (int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout <<ans;
	}else if(m==3){
		int ans=0;
		for (int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for (int k=j+1;k<=n;k++){
					ans=max(ans,a[i]&a[j]&a[k]);
				}
			}			
		}
		cout <<ans;
	}else if(m==1){
		int ans=0;
		for (int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout <<ans;
	} 
	return 0;
}
