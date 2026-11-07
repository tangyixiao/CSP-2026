#include<bits/stdc++.h>
using namespace std;
#define ll long long
const size_t mn = (size_t)(2e5+100);
int n;
ll a[mn],ans=0;
char b[mn];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
	}
	int l=0,r=n-1;
	while(l<r) {
		if(a[l]>a[r]) {
			if(b[l]!=b[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		} else if(a[l]<a[r]) {
			if(b[l]!=b[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		} else {
			if(b[l]!=b[r]) ans+=a[r];
			r--;
			l++;
		}
	}
	cout<<ans;
	return 0;
}
