#include <bits/stdc++.h>
#define ll long long
using namespace std;


long long n,m;
long long a[200010],sum[200010];



int main() {
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	ll k=a[n];
	for(int i=n-1;i>n-m;i--){
		k&=a[i];
	}
	printf("%lld",k);
	
	
	return 0;
}
