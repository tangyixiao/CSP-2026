#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],sum,t,maxx,cnt[5];
long long check(long long n) {
	while(1) {
		if(n==1) return -1;
		if(n%2!=0) return 1;
		n/=2;
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(n<=2001) {
		for(long long i=n; i>=1; i--) {
			sum=a[i];
			for(long long j=1; j<m; j++) {
				sum&=a[i-j];
				if(sum<=maxx) break;
			}
			if(sum>maxx) maxx=sum;
		}
		cout<<maxx;
	} else {
		if(a[n]<=4) {
			sum=0;
			for(long long i=n; i>=1; i--) {
				cnt[a[i]]++;
			}
			if(cnt[4]>=m) cout<<4;
			else if(cnt[3]>=m) cout<<3;
			else if(cnt[3]+cnt[2]>=m) cout<<2;
			else if(cnt[3]+cnt[1]>=m) cout<<1;
			else cout<<0;
		} else {
			sum=a[n];
			for(long long j=1; j<m; j++) {
				sum&=a[n-j];
			}
			cout<<sum;
		}
	}

	return 0;
}
