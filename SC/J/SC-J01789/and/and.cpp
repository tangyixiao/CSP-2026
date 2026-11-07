#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],mx=-1,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n){
		cin>>a[1];
		ans=a[1];
		for(int i=2;i<=n;i++){
			cin>>a[i];
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(mx<a[i]){
			mx=a[i];
		}
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	mx=-1;
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(a[i]&a[j],mx);
			}
		}
		cout<<mx;
		return 0;
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=n;i>n-m;i--){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}