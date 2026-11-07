#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],mx,bj;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(a[i]>4)bj=0;
	}
	if(m==1) {
		for(int i=1; i<=n; i++)mx=max(mx,a[i]);
		cout<<mx;
	} else if(m==2) {
		for(int i=1; i<=n; i++) {
			for(int j=n; j>i; j--) {
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
	} else if (m==n) {
		for(int i=1; i<=n; i++) {
			mx=mx&a[i];
		}
		cout<<mx;
	} else if (m==n-1) {
		long long mi=0x3f3f3f3f3f3f3f3f;
		for(int i=1; i<=n; i++) {
			mx=max(mx,mx&a[i]);
			mi=min(mi,a[i]);
		}
		cout<<mx-mi;
	} else {
		sort(a+1,a+1+n);
		cout<<a[(n+1)/2];
	}
	return 0;
}