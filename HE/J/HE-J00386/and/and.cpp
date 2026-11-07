#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],sum,maxx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(long long j=0;j<m;j++){
		sum=a[n-j];
		for(long long i=n-j-1;i>=n-j-m+1;i--){
			sum=sum&a[i];
		}
		if(sum>maxx){
			maxx=sum;
		}
	}
	cout<<maxx;
	return 0;
}
