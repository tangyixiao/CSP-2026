#include <bits/stdc++.h>
using namespace std;
long long a[200005],ans,ans1,maxa,sum1,ans2=1;
bool cmp(long long a,long long b) {
	return a>b;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		maxa=max(maxa,a[i]);
		if(a[i]==1) {
			sum1++;
		}
	}
	sort(a+1,a+n+1,cmp);
	if(m==1) {
		cout<<a[1];
		return 0;
	} else if(m==2 && n<=2000) {
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				if(i!=j) {
					ans1=max(ans1,a[i]&a[j]);
				}
			}
		}
		cout<<ans1;
		return 0;
	}
	ans=a[1];
	for(int i=1; i<=m; i++) {
		ans=(ans&a[i]);
	}
	for(int j=1; j<=sum1 && j<=m; j++) {
		for(int i=1; i<=m-sum1; i++) {
			ans2=(ans2&a[i]);
		}
		ans=max(ans2,ans);
		ans2=1;
	}
	cout<<ans;
	return 0;
}
