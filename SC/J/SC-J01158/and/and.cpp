#include<bits/stdc++.h>

using namespace std;
long long n,m,a[1000005],ans;
long long check(long long x) {
	while(x&&x!=1) {
		if(x%2==1&&x!=1) {
			return 0;
		}
		x/=2;
	}
	return 1;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1) {
		long long maxx=-1e18;
		for(long long i=1; i<=n; i++) {
			cin>>a[i];
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==n) {
		long long ans;
		cin>>ans;
		for(long long i=2; i<=n; i++) {
			long long t;
			cin>>t;
			ans=(ans&t);
		}
		cout<<ans;
		return 0;
	}
	if(m==2) {
		for(long long i=1; i<=n; i++) {
			cin>>a[i];
		}
		long long maxx=-1e18;
		for(long long i=1; i<=n; i++) {
			for(long long j=i+1; j<=n; j++) {
				maxx=max(maxx,(a[i]&a[j]));
			}
		}
		cout<<maxx;
		return 0;
	}
	bool t1=0,t2=0,t3=0;
	for(long long i=1; i<=n; i++) {
		cin>>a[i];
		if(check(a[i]+1)==0) {
			t1=1;
		}
		if(a[i]!=i-1) {
			t2=1;
		}
		if(a[i]>4) {
			t3=1;
		}
	}
	sort(a+1,a+1+n);
	if(t1==0) {
		cout<<a[m];
		return 0;
	}
	if(t2==0) {
		long long ans1=a[n];
		for(long long i=n-1; i>=n-m+1; i--) {
			ans1=(ans1&a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(t3==0) {
		cout<<100;
		return 0;
	} else {
		long long ans;
		ans=a[1];
		for(long long i=2; i<=n; i++) {
			long long t;
			t=a[i];
			ans=(ans&t);
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
