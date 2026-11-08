#include <bits/stdc++.h>
using namespace std;
long long a[500005];
bool cmp(long long a,long long b) {
	return a>b;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,sum;
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	sum=a[0];
	for(int i=1; i<m; i++) {
		sum&=a[i];
	}
	cout<<sum;
	return 0;
}

