#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	long long a[n+1],b=-4294967295;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for (int i=n-1;i>=n-m+1;i--) {
		for (int j=1;j<=i;j++) {
			a[j]=a[j]&a[j+1];
		}
	}
	for (int i=1;i<=n-m+1;i++) {
		b=max(a[i],b);
	}
	cout<<b;
	return 0;
}


