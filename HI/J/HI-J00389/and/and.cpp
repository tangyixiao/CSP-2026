#include <bits/stdc++.h>
using namespace std;
long long n,q,a[200005],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	sum=a[n];
	for(int i=n-1;i>=n-q;i--){
		sum=sum & a[i];
	}
	cout<<sum;
	return 0;
}
