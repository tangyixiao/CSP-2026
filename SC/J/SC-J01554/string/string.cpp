#include<bits/stdc++.h>
using namespace std;
long long n,x=0;
long long a[10005];
char c[10005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		x+=a[i];
	}
/*	int l=1,r=n;
	while(l<=r) {
		if(a[l]>a[r]) {
			if(c[l]!=c[r])x+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}
		if(a[l]<a[r]) {
			if(c[l]!=c[r])x+=a[l];
			a[r]-=a[l];
			a[l]=0;
			l--;
		}

	}
	*/
	if(c[1]!=c[n]) cout<<x/2;
	if(c[1]==c[n]) cout<<0;
	return 0;
}