#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0; 
	}if(m==1){
		sort(a+1,a+1+n);
		cout<<a[1];
		return 0;
	}if(m==2){
		int maxn=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n-1){
		int qz[200009],hz[200009];
		int qzs=a[1],maxn=-1;
		for(int i=1;i<=n;i++){
			qzs=qzs&a[i];
			qz[i]=qzs;
		} 
		qzs=a[n];
		for(int i=n;i>=1;i--){
			qzs=qzs&a[i];
			hz[i]=qzs;
		}
		for(int i=1;i<=n;i++){
			if(i==1){
				maxn=max(maxn,hz[2]);
			}else if(i==n){
				maxn=max(maxn,qz[n-1]);
			}else{
				maxn=max(maxn,qz[n-1]*hz[n+1]);
			}
		}
		cout<<maxn;
		return 0;
	}
	return 0;
} 
