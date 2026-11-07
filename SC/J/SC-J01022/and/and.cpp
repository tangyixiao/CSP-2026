#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+11]={0};
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		int ans=0;
		
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
			
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j) ans=max(a[i]&a[j],ans);
			}
		} 
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans=0,sum=0;
		for(int i=1;i<=n;i++){
			if(i==1) ans=a[2];
			else ans=a[1];
			for(int j=1;j<=n;j++){
				if(i==1){
					if(j>2){
						ans&=a[j];
					}
				}
				else{
					if(j>1&&i!=j){
						ans&=a[j];
					}
				}
			}
			sum=max(sum,ans);
		}
		cout<<sum;
		return 0;
	}
	return 0;
}