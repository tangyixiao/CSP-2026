#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005],l,r;
	long long s=0,ans=0;
	char c[200005];
	cin>>n;
	l=1;r=n;
	for (int i=1;i<=n;i++) {
		cin>>a[i]; s+=a[i];
		cin>>c[i];
	}
	for (int i=1;i<=s/2;i++,a[l]--,a[r]--) {
		if (a[l]<=0) l++;
		if (a[r]<=0) r--;
		if (c[l]!=c[r]) ans++;
	}
	cout<<ans;
	return 0;
}


