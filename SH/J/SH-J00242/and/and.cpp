#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans,a[200005];

int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	if(m==1){
		ans=-1e6;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
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
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i-1;j<=n;j++){
				long long l=(a[i]&a[j]);
				ans=max(ans,l); 
			}
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
