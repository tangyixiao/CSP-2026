#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],sum=-10;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(long long i=1;i<=n-m+1;i++){
		long long ans=0;
		for(long long k=1;k<=n-i-1;k++){
			long long s=a[i];
			for(long long j=1;j<=m-1;j++){
		    	s=s&a[i+j+k-1];
			}
			ans=max(ans,s);
		}
		sum=max(ans,sum);
	}
	cout<<sum;
	return 0;
}
