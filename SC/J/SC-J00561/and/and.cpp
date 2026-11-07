#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans=-100000,ans1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			ans=a[1];
			if(i==1){
				ans=a[2];
				for(int j=3;j<=n;j++){
					ans=ans&a[j];
				}
			}
			else{
				for(int j=2;j<=n;j++){
					if(j==i) continue;
					ans=ans&a[j];
				}	
			}
			ans1=max(ans1,ans);
		}
		cout<<ans1;
		return 0;
	}
	return 0;
}
