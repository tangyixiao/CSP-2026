#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans,ans1[2000009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	else if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
	}
	else if(m==n-1){
		a[0]=a[1];
		for(int i=1;i<=n;i++){
			ans1[i]=a[(i+1)%n];
			for(int j=1;j<=n;j++){
				if(j!=i) ans1[i]&=a[j];
			}
			ans=max(ans,ans1[i]);
		}
		cout<<ans;
	}
	else{
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=1;i<=m;i++){
			ans&=a[n-i+1];
		}
		cout<<ans;
	}
	return 0;
}