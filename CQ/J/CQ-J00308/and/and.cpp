#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[300005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		long long z=a[1];
		for(int i=1;i<=n;i++){
			z&=a[i];
		}
		cout<<z;
	}
	else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	else if(m==2){
		long long e=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				e=max(e,a[i]&a[j]);
			}
		}
		cout<<e;
	}
	else if(m==n-1){
		long long e=0;
		for(int i=1;i<=n;i++){
			long long z=1;
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				z&=a[j];
			}
			e=max(e,z);
		}
		cout<<e;
	}
	else{
		sort(a+1,a+n+1);
		long long e=0;
		for(int i=n;i>=m;i--){
			long long z=a[i];
			for(int j=i-1;j>=i-m+1;j--){
				z&=a[j];
			}
			e=max(e,z);
		}
		cout<<e;
	}
	return 0;
}
