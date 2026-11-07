#include <bits/stdc++.h> 
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=-1;
	int b; 
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){ 
				b=a[i]&a[j];
				ans=max(ans,b);
			} 
		}
	}
	if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){ 
				for(int k=j+1;k<=n;k++){
					b=a[i]&a[j]&a[k];
					ans=max(ans,b) ;
				}
			} 
		}
	}
	
	cout<<ans;
	return 0;
}
