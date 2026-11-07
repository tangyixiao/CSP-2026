#include<bits/stdc++.h>
using namespace std;
const int N=2e+5,M=2e+5;
int a[N+10];
int n,m; 
bool mz_a(){
	for(int i=1;i<=n;i++){
		long long sum=1;
		while(a[i]>=sum){
			sum*=2;
		}
		if(a[i]!=sum-1) return 0;
	}
	return 1;
}
bool mz_b(){
	long long sum=1;
	while(n>sum){
		sum*=2;
	}
	if(n!=sum) return 0;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1) return 0;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	if(mz_a()){
		int mx=-1;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}else if(mz_b()){
		int sum=a[n];
		for(int i=1;i<m;i++){
			int k=n-i;
			sum&=a[k];
		}
		cout<<sum;
	}else if(m==n-1){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum&=a[i];
		}
		int mx=-1;
		for(int i=1;i<=n;i++){
			int k=2147483647-a[i];
			mx=max(sum^k,mx);
		}
		cout<<mx;
	}else{
		if(m==1){
			int mx =-1;
			for(int i=1;i<=n;i++){
				mx=max(mx,a[i]);
			}
			cout<<mx;
		}else if(m==n){
			int sum=a[1];
			for(int i=2;i<=n;i++){
				sum&=a[i];
			}
			cout<<sum;
		}else if(m==2){
			int mx=-1;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					mx=max(mx,a[i]&a[j]);
				}
			}
			cout<<mx;
		}else cout<<0;
	}

	return 0;
}
