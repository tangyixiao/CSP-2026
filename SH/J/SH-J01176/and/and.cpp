#include <bits/stdc++.h>
using namespace std;
long long n,m,ans1;
int a[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	ans1=a[n];
	for(int i=n;n-i<m;i--) {
		ans1&=a[i];
	}
	cout<<ans1; 
	return 0;
}
