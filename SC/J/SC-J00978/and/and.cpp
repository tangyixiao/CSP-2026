#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++){
			mx=max(a[i],mx);
		}
		cout<<mx<<endl;
	}else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans<<endl;
	}else if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx<<endl;
	}else if(m==n-1){
		int ans1=a[1];
		for(int i=2;i<n;i++){
			ans1=ans1&a[i];
		}
		int ans2=a[2];
		for(int i=3;i<=n;i++){
			ans2=ans2&a[i];
		}
		cout<<max(ans1,ans2)<<endl;
	}else{
		sort(a+1,a+n+1);
		cout<<a[n-m+1]<<endl;
	}
}