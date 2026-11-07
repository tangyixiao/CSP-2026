#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+2;
int n,m;
long long a[N];
long long dfs(long long fr, int st, int l) { //st~n中选择l个的最大按位与之和 
	long long ans = 0;
	for (int i = st; i < n-l+1; i++) {
		if (l == 1) ans = max(ans,fr&a[i]);
		else ans = max(ans,dfs(fr&a[i],i+1,l-1));
	}
	return ans;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%d %d",&n,&m);
	for (int i = 0; i < n; i++) scanf("%lld",&a[i]);
	sort(a,a+n);
	
//	long long b = pow(2,29);
//	long long sv = 0;
//	int l = 0;
//	int r = n;
//	while (b >= 1) {
//		int idx = lowerbound(a+l,a+r,sv+b)-a;
//		if (idx-l)
//		b >>= 1;
//	}

//	long long ans = a[n-1];
//	for (int i = n-2; i > n-1-m; i--) ans &= a[i];
//	printf("%lld",ans);
	
	printf("%lld",dfs(pow(2,30)-1,0,m));
	
	return 0;
}
