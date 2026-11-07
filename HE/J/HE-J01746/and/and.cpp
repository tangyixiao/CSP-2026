#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],maxn,s[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int k=1; k<=m; k++) {
			for(int j=2; j<=n; j++) {
				a[i]=a[k]&a[j];
			}
		}
	}
	maxn=a[1];
	for(int i=2; i<=n; i++) {
		if(a[i]>maxn)maxn=a[i];
	}
	printf("%d",maxn);
	return 0;
}//5 3 31 3 1 15 7


