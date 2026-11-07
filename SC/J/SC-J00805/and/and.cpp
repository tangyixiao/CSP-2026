//and
#include<bits/stdc++.h>
using namespace std;
long long a[200005], n, m;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n ;i++) {
		cin>>a[i];
	}
	sort(a, a+n);
	long long ans=a[n-1];
	for(int i=n-1;i>=n-m;i--){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}