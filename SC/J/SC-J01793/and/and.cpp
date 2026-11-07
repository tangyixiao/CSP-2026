#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100100];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
//	for(int i=n;i>=n-m;i++){
//		ans
//	}
	printf("%d",a[n-m+1]);
}