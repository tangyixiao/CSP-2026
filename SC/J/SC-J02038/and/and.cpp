#include <bits/stdc++.h>
using namespace std;
int maxn = INT_MIN;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++)
		scanf("%d",&a[i]);
	for(int i = 0;i < n;i ++)
		for(int j = i + 1;j < n;j ++)
			maxn = max(maxn,a[i] & a[j]);
	printf("%d",maxn);
	return 0;
}