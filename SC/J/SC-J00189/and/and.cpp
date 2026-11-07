#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200009],ans=-1;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==2){
		for(long long i=1;i<=n/2+1;i++){
			for(long long j=1;j<=n;j++){
				if(i!=j){
					long long ls=a[i]&a[j];
					ans=max(ans,ls);
				}
			}
		}
		cout<<ans;
	}else if(m==1){
		cout<<a[n];
	}else if(m==n){
		long long a1=a[1],a2;
		for(long long i=1;i<=n;i++){
			a1=a1&a[i+1];
			a2=a[i+2]&a1;
		}
		cout<<a2;
	}else if(m==n-1){
		long long a1=a[1],a2;
		for(long long i=1;i<=n-1;i++){
			a1=a1&a[i+1];
			a2=a[i+2]&a1;
		}
		cout<<a2;
	} 
	
	
	
	return 0;
}