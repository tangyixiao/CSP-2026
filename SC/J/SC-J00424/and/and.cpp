#include<bits/stdc++.h>
using namespace std;
long long a[500005];
signed main(){//A
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,cnt=0;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==0)cnt++;
	}
	sort(a+1,a+1+n);
	if(cnt+m>n)cout<<a[n-m+1];
	else cout<<a[n-m+1];
	return 0;
}