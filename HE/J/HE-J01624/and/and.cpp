#include<bits/stdc++.h>
using namespace std;
int m,n,a[200010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		for(int i=1;i<n;i++){
			ans=a[i]&a[i+1];
		}
		cout<<ans;
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	ans=a[n];
	if(m==2){
		for(int i=n-1;i>=n-2;i--){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	for(int i=n-1;i>=n-m+1;i--){
		ans&=a[i];
	}
	cout<<ans;
	
	return 0;
}
