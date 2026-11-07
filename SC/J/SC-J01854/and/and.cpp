#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++)
		scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	ans = a[n-m+1];
	printf("%lld\n",ans);
	return 0;
} 