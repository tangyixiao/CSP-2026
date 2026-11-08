#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;cin>>n>>m;long long p=0;bool q=1;
	for(long long j=1;j<=n;j++){
		cin>>a[j];
		if (a[j]>p)p=a[j];
		if (a[j]!=j-1) q=0;
	}
	sort(a+1,a+n+1);
	if (m==1){
		cout<<p;
		return 0;
	}
	if (q==1){
		cout<<a[n-m+1];
	}
	cout<<a[n-m+1];
	return 0;
}
