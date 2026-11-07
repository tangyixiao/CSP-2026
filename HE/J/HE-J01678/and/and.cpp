#include <bits/stdc++.h>
using namespace std;
int a[200005];
int p[200005];
int q[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	if(n==m){
		int sum=a[1];
		for(int i=2;i<=n;i++) sum=sum&a[i];
		cout<<sum;
	}
	else if(m==n-1){
		p[1]=a[1];
		for(int i=2;i<=n;i++) p[i]=(p[i]&a[i]);
		q[n]=a[n];
		for(int j=n-1;j>=1;j--) q[j]=(q[j]&a[j]);
		int ans=0;
		for(int i=2;i<n;i++){
			ans=max(ans,(p[i-1]&q[i+1]));
		}
		ans=max(ans,q[2]);
		ans=max(ans,p[n-1]);
		cout<<ans;
	}else if(m==2){
		int ans=0;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++) ans=max(ans,a[i]&a[j]);
		cout<<ans;
	}else {
		int ans=0;
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
	}
	
	return 0;
}
