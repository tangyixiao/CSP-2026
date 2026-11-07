#include<bits/stdc++.h>
using namespace std;
int n;
int ans;
int a[200005];
char b[200005];
int len;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>a[0]>>b[0];
	for(int i=1;i<n;i++) {
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	int l=1;
	int r=len;
	int p=0;
	int q=n-1;
	while(l<=r) {
		if(a[p]<a[q]) {
			if(b[p]!=b[q]) {
				ans+=a[p];
			}
			l+=a[p];
			r-=a[p];
			a[q]-=a[p];
			p++;
		}
		else {
			if(b[p]!=b[q]) {
				ans+=a[q];
			}
			l+=a[q];
			r-=a[q];
			a[p]-=a[q];
			q--;
		}
	}
	cout<<ans;
}
