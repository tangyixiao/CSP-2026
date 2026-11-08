#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int f[200020];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
//	printf("%d",3|3);
//	memset(f,1,sizeof f);
//	printf("%d",f[1]);
	sort(a+1,a+n+1);
	printf("%d",a[n-m+1]);
	return 0;
}
//4 2
//3 15 12 12
