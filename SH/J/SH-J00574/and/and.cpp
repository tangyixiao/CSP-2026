#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],x,ma;
int main() {
	freopen("and.in ","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>a[1];
	x=a[1];
	for (int i=2;i<=n;i++) {
		cin>>a[i];
		x=x&a[i];
	}
	sort(a+1,a+n+1);
	if (m==n) {
		cout<<x;
	}else if (m==2){
		for (int i=1;i<n;i++) {
			for (int j=i+1;j<=n;j++) {
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
	}else {
		cout<<a[n];
	}
	return 0;
}
